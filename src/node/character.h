#pragma once
#include <string>
#include "../event.hpp"

using namespace std;

namespace Dungeon{
    class Character{
    public:
        Character(int hp, int mana, string name) : hp(hp), mana(mana), name(name) {};
        virtual void trigger_event(Event* event) = 0;
    protected:
        int hp, mana;
        string name;
    };
}