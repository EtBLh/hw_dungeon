#include "player.h"
#include "room.hpp"
#include <iostream>

using namespace Dungeon;

#include <cmath>

void Player::trigger_event(Event* event){
    switch(event->type){
        case event_type::damage:{
            damage_event* d_ev = dynamic_cast<damage_event*>(event);

            if (damage > real_armor()) this->hp -= damage - real_armor();
            if (hp <= 0) die();
            cout << "took " << d_ev->amount << " damage, armor: " << real_armor() << ", health remain " << hp << endl;
            break;
        }
        case event_type::move:{
            move_event* m_ev = dynamic_cast<move_event*>(event);
            move(m_ev->vec);
            break;
        }
        case event_type::attack:{
            clock_t now = clock();
            if (now - last_attack <= attack_cd) return;
            last_attack = now;
            for (monster* _monster : dto.current_room->monster_list){
                if (distance(rect(_monster->pos,1,1),rect(pos,1,1))<= 1){
                    damage_event* de = new damage_event(real_damage());
                    _monster->trigger_event(de);
                    dto._sprite_loader->add_particle(particle_type::advanced,_monster->pos);
                }
            }
            for (npc* _npc : dto.current_room->npc_list){
                if (distance(rect(_npc->pos,1,1),rect(pos,1,1))<= 1){
                    damage_event* de = new damage_event(0);
                    _npc->trigger_event(de);
                    dto._sprite_loader->add_particle(particle_type::advanced,_npc->pos);
                }
            }
            break;
        }
    }
}

void Player::move(vector_d vec){
    vector_d moved = pos + vec;
    //collision dectect rectangle
    rect player_rect(moved.x+0.1,moved.y+0.1,0.8,0.8);
    if (dto.current_room->can_move(player_rect)) pos = moved;
    dto.player->sprite->set_direction(vec.x/abs(vec.x));

    dto.current_room->action();
}

void Player::die(){
    // cout << "your dead." << endl;
    dto.talk("you are dead.");
    dto.set_game_state(false);
}

int Player::real_damage(){
    int _real_damage = damage;
    for (item* it : inventory){
        _real_damage += it->damage;
    }
    return _real_damage;
}

int Player::real_armor(){
    int _real_armor = armor;
    for (item* it : inventory){
        _real_armor += it->armor;
    }
    return _real_armor;
}