#include "game_saver.hpp"  

#include "fstream"

using namespace std;
using namespace Dungeon;
using namespace nlohmann;
	
game_saver::~game_saver(){
	
}

void game_saver::save(){
    json root;
    root["player"] = get_player();
    root["room_list"] = get_room_list();
    root["items"] = gl->items;
    ofstream output("save.json");
    output << setw(4) << root << endl;
    dto.talk("Saved.");
}

json game_saver::get_player(){
    json player;
    player["x"] = dto.player->pos.x;
    player["y"] = dto.player->pos.y;
    player["damage"] = dto.player->damage;
    player["armor"] = dto.player->armor;
    player["hp"] = dto.player->hp;
    player["attack_speed"] = dto.player->attack_speed;
    json inventory = json::array();
    for (item* it : dto.player->inventory){
        for (int i = 0; i < dto.item_list.size(); i++){
            if (it == dto.item_list[i]){
                inventory.push_back(i);
                break;
            }
        }
    }
    for (int i = 0; i < dto.room_list.size(); i++){
        if (dto.current_room == dto.room_list[i]) player["room"] = i;
    }
    player["inventory"] = inventory;
    return player;
}

json game_saver::get_room_list(){
    json room_list = json::array();
    for (Room* _room : dto.room_list){
        json single_room;
        single_room["map"] = _room->room_data["map"];
        single_room["walls"] = _room->room_data["walls"];
        single_room["portals"] = _room->room_data["portals"];
        single_room["treasures"] = _room->room_data["treasures"];
        json _monster_arr = json::array();
        for (monster* _monster: _room->monster_list){
            json single_monster;
            single_monster["x"] = _monster->pos.x;
            single_monster["y"] = _monster->pos.y;
            single_monster["hp"] = _monster->hp;
            single_monster["damage"] = _monster->damage;
            single_monster["armor"] = _monster->armor;
            single_monster["attack_speed"] = _monster->attack_speed;
            _monster_arr.push_back(single_monster);
        }
        single_room["monsters"] = _monster_arr;
        json _npc_arr = json::array();
        for (npc* _npc: _room->npc_list){
            json single_npc;
            single_npc["x"] = _npc->pos.x;
            single_npc["y"] = _npc->pos.y;
            single_npc["conversation"] = _npc->talked?"":_npc->conversation;

            _npc_arr.push_back(single_npc);
        }
        single_room["npc"] = _npc_arr;
        room_list.push_back(single_room);
    }
    return room_list;
}