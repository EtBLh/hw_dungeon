#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include "character.h"
#include "../event.hpp"
#include "../const.h"
#include "../util.hpp"
#include "../dto.h"
#include "../view/sprite_loader.h"
#include "item.hpp"
#include <vector>

namespace Dungeon{
    class Player : public Character{
    private:
        Dto& dto = Dto::getInstance();
        void move(vector_d vec);
        const int attack_cd = 0.5*CLOCKS_PER_SEC;
        clock_t last_attack = 0;
        int real_armor();
        int real_damage();
    public:
        vector<item*> inventory;
        Player(vector_d pos, int hp, int damage, int armor, int attack_speed):
            Character(pos, hp, damage, armor, attack_speed) {
            sprite = &(dto._sprite_loader->player);
        };
        void trigger_event(Event* event);
        void character_loop() {}; 
        void die();
        friend class game_saver;
    };
}

#endif