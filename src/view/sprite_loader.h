#pragma once
#include <SFML/graphics.hpp>
namespace Dungeon{ 
	const int TILE_LENGTH = 16, TILE_COL = 13, TILE_NUM = 78;
	class sprite_loader {
		private:
			sf::Texture map_tile;
			sf::Sprite map_tile_sprite[TILE_NUM];
			sf::Texture player_texture;
			sf::Sprite player_sprite;
		public:
			sprite_loader();
			~sprite_loader();
			sf::Sprite get_map_sprite(int index);
			sf::Sprite get_player_sprite();
	};
}