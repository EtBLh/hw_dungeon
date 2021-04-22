#pragma once
#include "node/player.h"

namespace Dungeon{
    /**
     * Data transfer object
     * Singleton
     */
    class Dto
    {
        public:
            static Dto& getInstance()
            {
                static Dto instance;
                return instance;
            }
            Dto(Dto const&)             = delete;
            void operator=(Dto const&)  = delete;
        
            void set_game_state(bool s) {game_state = s;}
        private:
            Dto() {}
            Player* player = new Player();
            bool game_state = false;
    };
}