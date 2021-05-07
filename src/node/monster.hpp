#ifndef MONSTER_H
#define MONSTER_H
#pragma once

#include "character.h"
#include "../event.hpp"
#include "../dto.h"
#include <time.h>

namespace Dungeon{
class monster : public Character{
	private:
		Dto& dto = Dto::getInstance();
	public:
		void trigger_event(Event* event);
		void character_loop();
		void die();
		monster(vector_d pos, int hp, int damage, int armor, float attack_speed) :
			Character(pos, hp, damage, armor, attack_speed) {
				sprite = &(dto._sprite_loader->monster);
			};
		~monster();

};
}
#endif