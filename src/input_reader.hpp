#ifndef INPUT_READER_H
#define INPUT_READER_H
#pragma once

#include <SFML/Graphics.hpp>
#include "dto.h"
#include "service/game_saver.hpp"
#include "util.hpp"

namespace Dungeon{	
class input_reader{
	private:
		Dto& dto = Dto::getInstance();
	    vector_d* move_offsets[4] = { //per block
			new vector_d(0.02,0),
			new vector_d(0,0.02),
			new vector_d(-0.02,0),
			new vector_d(0,-0.02),
		};
		game_saver* gs = nullptr;
	public:
		void read();
		input_reader(game_saver* gs);
		~input_reader();
		

};
}
#endif