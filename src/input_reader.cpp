#include "input_reader.hpp"  
#include "event.hpp"
#include "util.hpp"
#include "node/player.h"
#include <SFML/Window.hpp>
	
using namespace Dungeon;

input_reader::input_reader()
{
	
}
	
input_reader::~input_reader()
{
}

void input_reader::read(){
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
