#include "controller.h"
#include "view/view.h"
#include <iostream>

using namespace std;

void Dungeon::Controller::game_start(){
    view->init();
    service.init();
    dto.set_game_state(true);
}