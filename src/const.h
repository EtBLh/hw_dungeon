#pragma once
#include <SFML/Graphics.hpp>

namespace Dungeon{
    const float WINDOW_WIDTH    = 2400,
                WINDOW_HEIGHT   = 1350,
                SCALER          = 6;
    const sf::Color
                BG_COLOR        = sf::Color(0x3A,0x00,0x01);
    const int   PLAYER_DEFAULT_HP   = 100,
                PLAYER_DEFAULT_MANA = 20,
                BLOCK_WIDTH         = 16;
    const int TILE_LENGTH = 16, TILE_COL = 13, TILE_NUM = 78;

}