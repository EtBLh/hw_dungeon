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
        portal _portal(
            vector_d((*it)["x"],(*it)["y"]),
            (*it)["to"],
            vector_d((*it)["to_x"],(*it)["to_y"]));
        this->portal_list.push_back(_portal);
    }
    for (json::iterator it = room_data["treasures"].begin(); it != room_data["treasures"].end(); ++it){
        json data = *it;
        treasure _treasure(
            vector_d(data["x"],data["y"]),
            data["width"],
            data["height"]
        );
        for (json::iterator _item = data["item"].begin(); _item != data["item"].end(); ++ _item){
            _treasure.add_item(*_item);
        }
        this->treasure_list.push_back(_treasure);
    }

    for (json::iterator it = room_data["monsters"].begin(); it != room_data["monsters"].end(); ++it){
        json data = *it;
        monster* _monster = new monster(
            vector_d(data["x"],data["y"]),
            data["hp"],
            data["damage"],
            data["armor"],
            data["attack_speed"]
        );
        this->monster_list.push_back(_monster);
    }
    for (json::iterator it = room_data["npc"].begin(); it != room_data["npc"].end(); ++it){
        json data = *it;
        npc* _npc = new npc(
            vector_d(data["x"],data["y"]),
            data["conversation"]
        );
        this->npc_list.push_back(_npc);
    }
}

bool Room::can_move(rect src){
    for(auto it : wall_list){
        if (is_collide(src, it)) {
            return false;
        }
    }
    for(monster* it : monster_list){
        if (is_collide(src, rect(it->pos,1,1))) {
            return false;
        }
    }
    for(npc* it : npc_list){
        if (is_collide(src, rect(it->pos,1,1))) {
            return false;
        }
    } 
    return true;
}

void Room::action(){

    rect player_collide_rect(dto.player->pos, 0.8,0.8);

    //portal action
    for(portal it : portal_list){ 
        if (is_collide(rect(it.pos.x,it.pos.y,1,1), player_collide_rect))
            dto.room_list[it.destination]->enter(it.dest_init);
    }
    //treasure action
    for(treasure it : treasure_list){
        if (is_collide(it.collide_box, player_collide_rect))
            for(item* _it : it.content_list){ 
                if (_it == nullptr)continue;
                if (_it->got) continue;
                dto.player->inventory.push_back(_it);
                _it->got = true;
                dto.talk("got " + _it->name);
            }
    }
}

void Room::enter(vector_d init_pos){
    dto.current_room = this;
    dto.player->pos = init_pos;
}