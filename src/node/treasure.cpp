#include "treasure.hpp"  

using namespace Dungeon;

treasure::~treasure()
{
	
}

void treasure::add_item(int index){
    content_list.push_back(dto.item_list[index]);
}