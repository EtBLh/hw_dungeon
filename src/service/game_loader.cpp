#include "game_loader.hpp"  
#include "../node/room.hpp"
#include "../node/player.h"
#include "../util.hpp"
#include "../dto.h"
#include <nlohmann/json.hpp>

using namespace Dungeon;
using namespace nlohmann;
	
game_loader::game_loader(){
    root = load_json_file("save.json");
    if (root.empty()){
        root = load_json_file("res/game.json");
    }
    room_list = root["room_list"];
    items = root["items"];

    json player_data = root["player"];
    dto.player = new Player(
        vector_d(player_data["x"],player_data["y"]),
        player_data["hp"],
        player_data["damage"],
        player_data["armor"],
        player_data["attack_speed"]
    );

    //item
    for (json::iterator it = items.begin(); it != items.end(); ++it){
        json data = *it;
        item* _item = new item(data["name"],data["damage"],data["armor"]);
        dto.item_list.push_back(_item);
    }

    for (json::iterator it = player_data["inventory"].begin(); 
         it != player_data["inventory"].end(); ++it){
        dto.player->inventory.push_back(dto.item_list[*it]);
    }

    //room
    for (json::iterator it = room_list.begin(); it != room_list.end(); ++it){
        Room* room = new Room(*it);
        dto.room_list.push_back(room);
    }
    if (dto.room_list[0])
        dto.current_room = dto.room_list[player_data["room"]];
}