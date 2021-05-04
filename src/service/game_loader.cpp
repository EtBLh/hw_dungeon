#include "game_loader.hpp"  
#include "../node/room.hpp"
#include "../util.hpp"
#include "../dto.h"
#include <nlohmann/json.hpp>

using namespace Dungeon;
using namespace nlohmann;
	
game_loader::game_loader(){
    root = load_json_file("res/game.json");
    room_list = root["room_list"];
    items = root["items"];
    for (json::iterator it = room_list.begin(); it != room_list.end(); ++it){
        Room* room = new Room(*it);
        dto.room_list.push_back(room);
    }
    if (dto.room_list[0])
        dto.current_room = dto.room_list[0];
}
	
game_loader::~game_loader()
{
	
}