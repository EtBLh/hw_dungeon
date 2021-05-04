#pragma once
#include <vector>

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

            Player* player = nullptr;
            
            vector<Room*> room_list;
            Room* current_room = nullptr;
        private:
            Dto() {};
            bool game_state = false;
    };
}