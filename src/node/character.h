#pragma once
#include <string>
#include "../event.hpp"
#include "../view/sprite_loader.h"

using namespace std;

namespace Dungeon{
    class Character{
    public:
        Character() {};
        Character(vector_d pos, int hp, int damage, int armor, float attack_speed) :
            pos(pos), hp(hp), damage(damage), armor(armor), attack_speed(attack_speed) {};
        virtual void trigger_event(Event* event) = 0;
        virtual void character_loop() = 0;
        virtual void die() = 0;
        animator* sprite = nullptr;
        vector_d pos;
    protected:
        int hp, damage, armor;
        float attack_speed;
        string name;
    };
}