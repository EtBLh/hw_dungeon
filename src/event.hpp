#pragma once
#include "util.hpp"

namespace Dungeon{

enum event_type{
    damage, 
    mouse_clicked,
    move
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

}