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
    bool input_arr[4] = {
        sf::Keyboard::isKeyPressed(sf::Keyboard::D),
        sf::Keyboard::isKeyPressed(sf::Keyboard::S),
        sf::Keyboard::isKeyPressed(sf::Keyboard::A),
        sf::Keyboard::isKeyPressed(sf::Keyboard::W)
    };
    for (int i = 0; i < 4; i++){
        if (input_arr[i]){
            move_event *me = new move_event(*(move_offsets[i]));
            dto.player->trigger_event(me);
        }
    }


}
