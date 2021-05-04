#ifndef PORTAL_H
#define PORTAL_H
#pragma once

#include "../util.hpp"

namespace Dungeon{
class portal {
	public:
		vector_d pos;
		int destination = -1;
		portal(vector_d pos, int dest):
			pos(pos), destination(dest) {};
		~portal();

};
}
#endif