#include "dto.h"

using namespace Dungeon;

Dto& Dto::getInstance()
{
    static Dto instance;
    return instance;
}

void Dto::set_game_state(bool s){game_state = s;}