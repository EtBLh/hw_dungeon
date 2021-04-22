#pragma once
#include "dto.h"
#include "view/view.h"
#include "service.h"
#include <SFML/graphics.hpp>

namespace Dungeon{
    class Controller{
    private:
        Dto& dto = Dto::getInstance();
        View* view;
        Service service;
    public:
        Controller(View* view) : view(view) {};
        void game_start();
    };
}