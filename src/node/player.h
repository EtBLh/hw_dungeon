#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include "character.h"
#include "../event.hpp"
#include "../const.h"
#include "../util.hpp"
#include "../dto.h"

namespace Dungeon{
    class Player : Character{
    private:
        Dto& dto = Dto::getInstance();
        void move(vector_d vec);
    public:
        vector_d pos = vector_d(2,2);
        Player() : Character(PLAYER_DEFAULT_HP, PLAYER_DEFAULT_MANA, "") {};
        void trigger_event(Event* event);
    };
}

#endif