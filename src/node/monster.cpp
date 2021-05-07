#include "monster.hpp"  
#include "../event.hpp"
#include "player.h"
#include "room.hpp"
#include <iostream>

using namespace Dungeon;
	
monster::~monster(){
	
}

void monster::character_loop(){
    static bool activate = false;
    static clock_t last_attack;
    float _distance = distance(
        rect(dto.player->pos,1,1),
        rect(pos,1,1)
    );
    if (!activate && _distance <= 1){
        activate = true;
        last_attack = clock();
    }
    clock_t now = clock();
    bool time_passed = (now - last_attack) >= (1.0/attack_speed)*CLOCKS_PER_SEC;
    if (activate && time_passed){
        Event* event = new damage_event(this->damage);
        dto.player->trigger_event(event);
        last_attack = now;
        activate = false;
        dto._sprite_loader->add_particle(particle_type::basic, dto.player->pos);
    }
}

void monster::die(){
    for (vector<monster*>::iterator it = dto.current_room->monster_list.begin();
        it != dto.current_room->monster_list.end(); ){
        if ((*it) == this) dto.current_room->monster_list.erase(it);
        else ++it;
    }
}

void monster::trigger_event(Event* event){
    switch (event->type){
    case event_type::damage:{
        damage_event* de = dynamic_cast<damage_event*>(event);
        hp -= de->amount;
        if (hp <= 0) die();
    }
    default:
        break;
    }
}