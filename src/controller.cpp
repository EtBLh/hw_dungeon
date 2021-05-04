#include "controller.h"
#include "view/view.h"
#include "service/game_loader.hpp"
#include "input_reader.hpp"
#include <iostream>

using namespace std;

void Dungeon::Controller::game_start(){
    input_reader ir;
    game_loader gl;
    dto.set_game_state(true);
    view = new View(window);

    //game loop
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window->close();
        }
        view->render();
        ir.read();
    }
}