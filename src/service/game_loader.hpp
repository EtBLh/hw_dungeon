#ifndef GAME_LOADER_H
#define GAME_LOADER_H
#pragma once

#include "../dto.h"
#include <nlohmann/json.hpp>
using namespace nlohmann;

namespace Dungeon{
class game_loader  
{
	private:
		json root;
		json room_list;
		json items;
		Dto& dto = Dto::getInstance();
	public:
		game_loader();
		~game_loader();

};
}
#endif