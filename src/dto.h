#pragma once
#include <vector>
#include "node/item.hpp"
#include "view/sprite_loader.h"

using namespace std;
namespace Dungeon{

    class Player;
    class Room;

    /**
     * Data transfer object
     * Singleton
     */
    class Dto
    {
        public:
            static Dto& getInstance();
            Dto(Dto const&)             = delete;
            void operator=(Dto const&)  = delete;
        
            void set_game_state(bool s);
            bool get_game_state() {return game_state;};

            Player* player = nullptr;
            
            vector<Room*> room_list;
            Room* current_room = nullptr;
            vector<item*> item_list;
            sprite_loader* _sprite_loader;

            bool is_talking = false;
            string talk_content = "";

            void talk(string content);
            bool win = false;

        private:
            Dto() {};
            bool game_state = false;
    };
}