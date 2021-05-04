#include "room.hpp"  
#include "../dto.h"
#include "../util.hpp"
#include "player.h"
#include <iostream>
using namespace std;

using namespace Dungeon;
	
Room::~Room()
{
	
}

void Room::read(){
    auto map = load_json_file(room_data["map"]);
    for (json::iterator it = map["layers"].begin(); it != map["layers"].end(); ++it){
        this->layer_list.push_back((*it)["data"]);
    }
    for (json::iterator it = room_data["walls"].begin(); it != room_data["walls"].end(); ++it){
        rect wall(
            (*it)["x"].get<float>(),
            (*it)["y"].get<float>(),
            (*it)["width"].get<float>(),
            (*it)["height"].get<float>()
        );
        this->wall_list.push_back(wall);
    }
    for (json::iterator it = room_data["portals"].begin(); it != room_data["portals"].end(); ++it){
        portal _portal(vector_d((*it)["x"],(*it)["y"]), (*it)["to"]);
        this->portal_list.push_back(_portal);
    }
}

bool Room::can_move(rect src){
    for(auto it : wall_list){
        if (is_collide(src, it)) {
            return false;
        }
    }
    return true;
}

void Room::action(){
    //portal action
    for(portal it : portal_list){ 
        if (is_collide(rect(it.pos.x,it.pos.y,1,1), rect(dto.player->pos, 0.8,0.8)))
            dto.room_list[it.destination]->enter();
    }
}

void Room::enter(){
    dto.current_room = this;
    dto.player->pos = vector_d(2,2);
}