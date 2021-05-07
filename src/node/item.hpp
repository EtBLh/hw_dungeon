#ifndef ITEM_H
#define ITEM_H
#pragma once

#include <string>
using namespace std;

namespace Dungeon{

enum item_type{
	undefined = -1,
	weapon = 0
};

class item  {
	public:
		item_type type = undefined;
		string name = "";
		int damage;
		int armor;
		bool got = false;
		item(string name, item_type type, int damage, int armor):
			name(name), type(type), damage(damage), armor(armor) {};
};
}
#endif