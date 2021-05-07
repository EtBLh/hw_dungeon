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
}
	
sprite_loader::~sprite_loader(){
	
}

void sprite_loader::add_particle(particle_type type, vector_d pos){
    switch (type){
        case particle_type::basic:{
            particle* partic = new particle("res/attack/basic.png", CLOCKS_PER_SEC/80, 64, 24, 2.3, 10);
            particle_pool.push_back(partic);
            partic->set_position(conv_real_pos(pos));
            break;
        }
        case particle_type::advanced: {
            particle* partic = new particle("res/attack/advanced.png", CLOCKS_PER_SEC/120, 64, 49, 2.7, 15);
            particle_pool.push_back(partic);
            partic->set_position(conv_real_pos(pos));
            break;
        }
    };
}

void sprite_loader::kill_particles(){
    for (vector<particle*>::iterator it = particle_pool.begin(); it != particle_pool.end();){
        if ((*it)->ok_to_die()) it = particle_pool.erase(it);
        else ++it;
    }
}

sf::Sprite sprite_loader::get_map_sprite(int index){
    return map_tile_sprite[index-1];
}

sf::Sprite animator::get_sprite(){
    if (frame_number <= 1) return _sprite;
    clock_t now = clock();
    if (now - last_timestamp >= interval){
        int frame_diff = (now - last_timestamp) / interval;
        current_frame = (current_frame + frame_diff) % frame_number;
        _sprite.setTextureRect(sf::IntRect(current_frame*width,0,width,height));
        last_timestamp = now;
    }
    return _sprite;
}

void animator::set_direction(int direction){
    if (direction != 1 && direction != -1) return;
    _sprite.setScale(sf::Vector2f(direction*SCALER,SCALER));
    this->direction = direction;
};

animator::animator(string file_path, int interval, int width, int height, vector_d offset, int frame_number): 
    interval(interval), width(width), height(height),
    offset(offset), frame_number(frame_number), last_timestamp(clock()) {
    texture.loadFromFile(file_path);
    _sprite.setTexture(texture);
    _sprite.setTextureRect(sf::IntRect(0,0,width, height));
    _sprite.setScale(sf::Vector2f(SCALER,SCALER));
};

void animator::set_position(vector_d pos){
    vector_d directional_offset(direction == -1 ? SCALER*TILE_LENGTH : 0,0);
    vector_d _pos = pos - offset + directional_offset;
    _sprite.setPosition(sf::Vector2f(_pos.x,_pos.y));
}

particle::particle(string file_path, int interval, int width, int height, float size_per_block, int frame_number):
    animator(file_path, interval, width, height, vector_d(0,0), frame_number),
    self_destruction_time(frame_number*interval), real_scaler(SCALER/(width/TILE_LENGTH)*size_per_block),
    size_per_block(size_per_block) {
    initial_time = clock();
    _sprite.setScale(sf::Vector2f(real_scaler,real_scaler));
};

void particle::set_position(vector_d pos){
    vector_d offset(-((size_per_block-1)*TILE_LENGTH)/2*SCALER, (TILE_LENGTH*SCALER-height*real_scaler)/2);
    vector_d _pos = pos + offset;
    _sprite.setPosition(sf::Vector2f(_pos.x,_pos.y)); 
}