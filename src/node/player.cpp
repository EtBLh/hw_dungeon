#include "player.h"
#include "room.hpp"
#include <iostream>

using namespace Dungeon;

void Player::trigger_event(Event* event){
    switch(event->type){
        case damage:

        break;
        case Dungeon::move:
            move_event* ev = dynamic_cast<move_event*>(event);
            move(ev->vec);
        break;
    }
}

void Player::move(vector_d vec){
    vector_d moved = pos + vec;
    //collision dectect rectangle
    rect player_rect(moved.x+0.1,moved.y+0.1,0.8,0.8);
    if (dto.current_room->can_move(player_rect)) pos = moved;
    dto.current_room->action();
}