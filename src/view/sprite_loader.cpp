#include "sprite_loader.h" 
#include <iostream> 
	
using namespace Dungeon;

sprite_loader::sprite_loader(){
    //load map sprite
    if (!map_tile.loadFromFile("res/map_tiles.png")){
        std::cout << "sprite loading error" << std::endl;
    }
    for (int i = 0; i < TILE_NUM; i++){
        map_tile_sprite[i].setTexture(map_tile);
        int x = i / TILE_COL;
        int y = i % TILE_COL;
        map_tile_sprite[i].setTextureRect(
            sf::IntRect(y*TILE_LENGTH,x*TILE_LENGTH,TILE_LENGTH,TILE_LENGTH)
        );
    }

    //load player sprite
    if (!player_texture.loadFromFile("res/character/knight_m_idle_anim_f0.png")){
        std::cout << "sprite loading error" << std::endl;
    }
    player_sprite.setTexture(player_texture);
}
	
sprite_loader::~sprite_loader()
{
	
}

sf::Sprite sprite_loader::get_map_sprite(int index){
    return map_tile_sprite[index-1];
}

sf::Sprite sprite_loader::get_player_sprite(){
    return player_sprite;
}