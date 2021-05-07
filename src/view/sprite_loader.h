#pragma once
#include <SFML/graphics.hpp>
#include <vector>
#include <ctime>
#include <cstring>
#include <iostream>
#include "../const.h"
#include "../util.hpp"

using namespace std;
namespace Dungeon{ 

	enum particle_type{ basic, advanced };

	class animator{
	protected:
		sf::Texture texture;
		sf::Sprite _sprite;
		int interval; 
		int width, height;
		int frame_number;
		int current_frame;
		int direction = 1;
		clock_t last_timestamp = 0;
    	vector_d offset;
	public:
		void set_direction(int direction);
		void set_position(vector_d pos);
		sf::Sprite get_sprite();
		animator(string file_path, int interval, int width, int height, vector_d offset, int frame_number);
	};

	class particle : public animator{
	private:
		int self_destruction_time = -1;
		clock_t initial_time = 0;
		float real_scaler;
		float size_per_block;
	public:
		particle(string file_path, int interval, int width, int height, float size_per_block, int frame_number);
		bool ok_to_die(){ return clock() - initial_time >= self_destruction_time; }
		void set_position(vector_d pos);

	};
	
	class sprite_loader {
		private:
			sf::Texture map_tile;
			sf::Sprite map_tile_sprite[TILE_NUM];

		public:
			sprite_loader();
			~sprite_loader();
			sf::Sprite get_map_sprite(int index);
			animator player = animator("res/character/player.png", CLOCKS_PER_SEC/5, 16, 28, vector_d(0,(28-16)*SCALER), 4),
				monster = animator("res/character/monster.png", CLOCKS_PER_SEC/5, 16, 20, vector_d(0,(20-16)*SCALER), 8),
				npc = animator("res/character/npc.png", CLOCKS_PER_SEC/5, 16, 28, vector_d(0,(28-16)*SCALER), 4);

			vector<particle*> particle_pool;

			void add_particle(particle_type type, vector_d pos);
			void kill_particles();
	};
}