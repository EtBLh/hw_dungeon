#pragma once
#include <SFML/Graphics.hpp>

namespace Dungeon{
    const float WINDOW_WIDTH    = 2400,
                WINDOW_HEIGHT   = 1350;
    const sf::Color
                BG_COLOR        = sf::Color(0xff,0xff,0xff);
    const int   PLAYER_DEFAULT_HP   = 100,
                PLAYER_DEFAULT_MANA = 20;
}