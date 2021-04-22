#include "controller.h"
#include "view/view.h"
#include "const.h"
#include <SFML/graphics.hpp>
using namespace Dungeon;

int main(){
    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),"Dungeon");
    View* view = new View(window);
    Controller controller(view);
    controller.game_start();
    return 0;
}