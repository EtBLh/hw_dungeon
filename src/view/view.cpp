#include "view.h"
#include "../const.h"
#include "../util.hpp"
#include "../node/player.h"
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
    draw_character();
    
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

void View::draw_character(){
    // cout << "drawing character" << endl;
    sf::Sprite player_sprite = _sprite_loader.get_player_sprite();
    Player* player = dto.player;
    //16 * 28
    const vector_d offset(0,(28-16)*SCALER);
    vector_d real_pos = conv_real_pos(player->pos)-offset;
    player_sprite.setPosition(sf::Vector2f(real_pos.x, real_pos.y));
    player_sprite.setScale(sf::Vector2f(SCALER, SCALER));
    window->draw(player_sprite);
}