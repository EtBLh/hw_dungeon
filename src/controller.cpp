#include "controller.h"
#include "view/view.h"
#include "node/monster.hpp"
#include "node/room.hpp"
#include "service/game_loader.hpp"
#include "input_reader.hpp"
#include <iostream>

using namespace std;

void Dungeon::Controller::game_start(){
    game_loader gl;
    game_saver gs(&gl);
    input_reader ir(&gs);
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
        dto.player->character_loop();
        for (monster* _monster : dto.current_room->monster_list){
            _monster->character_loop();
        }
        for (npc* _npc : dto.current_room->npc_list){
            _npc->character_loop();
        }
        dto._sprite_loader->kill_particles();
        view->render();
        ir.read();

        if (!dto.win){
            bool win = true;
            for (Room* _room : dto.room_list){
                for (monster* _monster : _room->monster_list){
                    win = false;
                }
            }
            if (win) {
                dto.win = true;
                dto.talk("you have free the dungeon!");
            }
        }
        if (!dto.get_game_state()) game_over();
    }
}

void Dungeon::Controller::game_over(){
    cout << "game over." << endl;
    window->close();
}