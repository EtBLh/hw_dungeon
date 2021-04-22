#include "view.h"
#include "../const.h"

using namespace Dungeon;
void View::init(){
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        render();
    }
}

void View::render(){
    this->window->clear(BG_COLOR);
    
    this->window->display();
}