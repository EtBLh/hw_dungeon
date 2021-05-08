#ifndef GAME_SAVER_H
#define GAME_SAVER_H
#pragma once

#include <nlohmann/json.hpp>
#include "../dto.h"
#include "../node/player.h"
#include "../node/room.hpp"
#include "../node/monster.hpp"
#include "../node/npc.hpp"
#include "game_loader.hpp"

namespace Dungeon{
class game_saver  {
	private:
		game_loader* gl = nullptr;
		Dto& dto = Dto::getInstance();

		json get_player();
		json get_room_list();
	public:
		void save();
		game_saver(game_loader* gl) : gl(gl) {};
		~game_saver();

};
}


#endif