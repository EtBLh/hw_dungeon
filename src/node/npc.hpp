#ifndef NPC_H
#define NPC_H
#pragma once

#include "character.h"
#include "../event.hpp"
#include "../util.hpp"
#include "../view/sprite_loader.h"
#include "../dto.h"

namespace Dungeon{
class npc : public Character{
	private:
		Dto& dto = Dto::getInstance();
		string conversation;
		bool talked = false;
	public:
        npc(vector_d pos, string conversation) :
			Character(pos, 1, 0, 0, 1), conversation(conversation) {	
				sprite = &dto._sprite_loader->npc;
		};
		void trigger_event(Event* ev);
		void character_loop();
		void die();
		~npc();

};
}
#endif