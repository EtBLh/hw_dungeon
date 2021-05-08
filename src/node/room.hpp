#ifndef ROOM_H
#define ROOM_H
#pragma once

#include <nlohmann/json.hpp>
#include <vector>
#include "../util.hpp"
#include "../dto.h"
#include "portal.hpp"
#include "monster.hpp"
#include "npc.hpp"
#include "treasure.hpp"

using namespace std;
using namespace nlohmann;

namespace Dungeon{
class Room{
	private:
		void read();
		json room_data;
		Dto& dto = Dto::getInstance();
	public:
		vector<rect> wall_list;
		vector<json> layer_list;
		vector<portal> portal_list;
		vector<npc*> npc_list;
		vector<monster*> monster_list;
		vector<treasure> treasure_list;

		bool can_move(rect src);
		Room(json room_data): room_data(room_data) {read();};
		~Room();

		void action();
		void enter(vector_d init_pos);
		friend class game_saver;
};
}
#endif