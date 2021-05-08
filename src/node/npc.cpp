#include "npc.hpp"  
#include "room.hpp"
#include "player.h"

using namespace Dungeon;

void npc::trigger_event(Event* ev){
    switch(ev->type){
        case event_type::damage:{
            dto.talk("you dare attack me! I curse you to death.");
            dto.player->inventory.push_back(dto.item_list[3]);
            die();
        }
    }
}

void npc::character_loop(){
    if (!talked && distance(rect(dto.player->pos,1,1),rect(pos,1,1))<=1){
        dto.talk(conversation);
        talked = true;
    }
}

void npc::die(){
    for (vector<npc*>::iterator it = dto.current_room->npc_list.begin(); it != dto.current_room->npc_list.end();){
        if ((*it) == this) dto.current_room->npc_list.erase(it);
        else ++it;
    }
}

npc::~npc()
{
	
}