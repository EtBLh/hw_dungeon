#pragma once
#include "dto.h"
#include "view/view.h"
#include "const.h"
#include "node/player.h"
#include <SFML/graphics.hpp>

namespace Dungeon{
    class Controller{
    private:
        Dto& dto = Dto::getInstance();
        sf::RenderWindow* window = 
            new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH,WINDOW_HEIGHT), "Dungeon");
        View* view = nullptr;
    public:
        Controller(View* view) : view(view) { dto.player = new Player(); };
        void game_start();
    };
}