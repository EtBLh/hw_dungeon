#pragma once
#include "dto.h"
#include "view/view.h"
#include "const.h"
#include "node/player.h"
#include "service/game_saver.hpp"
#include <SFML/graphics.hpp>

namespace Dungeon{
    class Controller{
    private:
        Dto& dto = Dto::getInstance();
        sf::RenderWindow* window;
        View* view = nullptr;
    public:
        Controller(View* view) : view(view), window(view->window) {};
        void game_start();
        void game_over();
    };
}