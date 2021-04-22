#pragma once
#include <SFML/Graphics.hpp>
#include "../dto.h"

namespace Dungeon{
    class View{
    private:
        Dto& dto = Dto::getInstance();
        sf::RenderWindow* window;
        void render();
    public:
        View(sf::RenderWindow* window) : window(window) {};
        void init();
    };
}