#ifndef PORTAL_H
#define PORTAL_H
#pragma once

#include "../util.hpp"

namespace Dungeon{
class portal {
	public:
		vector_d pos;
		int destination = -1;
		vector_d dest_init;
		portal(vector_d pos, int dest, vector_d dest_init):
			pos(pos), destination(dest), dest_init(dest_init) {};
		~portal();

};
}
#endif