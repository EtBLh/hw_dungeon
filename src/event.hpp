#pragma once
#include "util.hpp"

namespace Dungeon{

enum event_type{
    damage,
    move,
    attack
};

typedef struct _event{
public:
    virtual ~_event() = default;
    _event(event_type type) :type(type) {};
    event_type type;
} Event;

typedef struct _move_event : Event{
public:
    vector_d vec;
    _move_event(vector_d vec) : Event(move), vec(vec) {};
} move_event;

typedef struct _damage_event : Event{
public:
    int amount;
    _damage_event(int amount) : Event(damage), amount(amount) {};
} damage_event;

typedef struct _attack_event : Event{
public:
    _attack_event() : Event(attack) {};
} attack_event;

}