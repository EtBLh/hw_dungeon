#ifndef TREASURE_H
#define TREASURE_H
#pragma once

#include "item.hpp"
#include "../dto.h"
#include "../util.hpp"
#include <vector>
namespace Dungeon{
class treasure {
	private:
		Dto& dto = Dto::getInstance();
	public:
		vector_d pos;
		rect collide_box;
		vector<item*> content_list;

		treasure(vector_d pos, float width, float height): 
			pos(pos), collide_box(rect(pos, width, height)) {};
		void add_item(int index);
		~treasure();
		friend class game_saver;

};
}
#endif