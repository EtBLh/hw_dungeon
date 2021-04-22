#pragma once
#include "character.h"
#include "../events/all.h"
#include "../const.h"

namespace Dungeon{
class Player : Character{
public:
    Player() : Character(PLAYER_DEFAULT_HP, PLAYER_DEFAULT_MANA, "") {};
    void triggerEvent(Event event);
private:

};
}