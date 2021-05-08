#include "view.h"
#include "../const.h"
#include "../util.hpp"
#include "../node/player.h"
#include "../node/monster.hpp"
#include "../node/npc.hpp"
#include "../node/room.hpp"
#include <iostream>
#include <vector>
#include <nlohmann/json.hpp>

using namespace nlohmann;
using namespace std;
using namespace Dungeon;

void View::render(){
    this->window->clear(BG_COLOR);

    if(!dto.current_room) return;

    Room* room = dto.current_room;
    for (vector<json>::iterator it = room->layer_list.begin(); it != room->layer_list.end(); ++it){
        draw_map_layer(*it);
    }
    draw_character(dto.player);
    for (monster* _monster : dto.current_room->monster_list){
        draw_character(_monster);
    }
    for (npc* _npc : dto.current_room->npc_list){
        draw_character(_npc);
    }
    for (particle* partic : _sprite_loader.particle_pool){
        draw_particle(partic);
    }

    if (dto.is_talking){
        sf::RectangleShape base(sf::Vector2f(9*TILE_LENGTH*SCALER,3*TILE_LENGTH*SCALER));
        base.setFillColor(sf::Color(0,0,0,0xDD));
        base.setPosition(sf::Vector2f(0.5*SCALER*TILE_LENGTH,6*TILE_LENGTH*SCALER));
        sf::Text text;
        text.setFont(font);
        text.setString(dto.talk_content);
        text.setCharacterSize(TILE_LENGTH*SCALER/3);
        text.setFillColor(sf::Color::White);
        text.setPosition(sf::Vector2f(1*SCALER*TILE_LENGTH,6.2*TILE_LENGTH*SCALER));
        window->draw(base);
        window->draw(text);
    }
    
    this->window->display();
}

void View::draw_map_layer(json layer){
    //map drawing
    for (json::iterator it = layer.begin(); it != layer.end(); ++it){
        if (*it == 0 )continue;
        int i = (it - layer.begin())/10;
        int j = (it - layer.begin())%10;
        sf::Sprite map_sprite = _sprite_loader.get_map_sprite(*it);
        map_sprite.setPosition(
            sf::Vector2f(TILE_LENGTH*SCALER*j,TILE_LENGTH*SCALER*i)
        );
        map_sprite.setScale(sf::Vector2f(SCALER,SCALER));
        window->draw(map_sprite);
    }
}

void View::draw_character(Character* charac){
    vector_d real_pos = conv_real_pos(charac->pos);
    charac->sprite->set_position(real_pos);
    window->draw(charac->sprite->get_sprite());
}

void View::draw_particle(particle* partic){
    window->draw(partic->get_sprite());
}