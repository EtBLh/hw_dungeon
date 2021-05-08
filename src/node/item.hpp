#ifndef ITEM_H
#define ITEM_H
#pragma once

#include <string>
using namespace std;

namespace Dungeon{

class item  {
	public:
		string name = "";
		int damage;
		int armor;
		bool got = false;
		item(string name, int damage, int armor):
			name(name), damage(damage), armor(armor) {};
};
}
#endif