#ifndef INPUT_READER_H
#define INPUT_READER_H
#pragma once

#include <SFML/Graphics.hpp>
#include "dto.h"
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
	public:
		void read();
		input_reader();
		~input_reader();
		

};
}
#endif