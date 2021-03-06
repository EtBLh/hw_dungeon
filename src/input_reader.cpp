#include "input_reader.hpp"  
#include "event.hpp"
#include "util.hpp"
#include "node/player.h"
#include <SFML/Window.hpp>
	
using namespace Dungeon;

input_reader::input_reader(game_saver* gs) : gs(gs) {};
	
input_reader::~input_reader()
{
}

void input_reader::read(){
    if (dto.is_talking){
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
            dto.is_talking = false;
            dto.talk_content = "";
        } else {
            return;
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)){
        gs->save();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)){
        dto.player->show_status();
    }
    bool move_input[4] = {
        sf::Keyboard::isKeyPressed(sf::Keyboard::D),
        sf::Keyboard::isKeyPressed(sf::Keyboard::S),
        sf::Keyboard::isKeyPressed(sf::Keyboard::A),
        sf::Keyboard::isKeyPressed(sf::Keyboard::W)
    };
    for (int i = 0; i < 4; i++){
        if (move_input[i]){
            move_event *me = new move_event(*(move_offsets[i]));
            dto.player->trigger_event(me);
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
        attack_event *ae = new attack_event();
        dto.player->trigger_event(ae);
    }

}
