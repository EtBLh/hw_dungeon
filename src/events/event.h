#pragma once

namespace Dungeon{

enum event_type{
    damage, 
    mouse_clicked
};
class Event{
public:
    Event();
    event_type type;
private:
};
}