#pragma once
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
#include "sprite_loader.h"
#include "../dto.h"

using namespace nlohmann;
namespace Dungeon{
    class View{
    private:
        Dto& dto = Dto::getInstance();
        sprite_loader _sprite_loader;
        sf::RenderWindow* window;
        void draw_map_layer(json layer);
        void draw_character();
    public:
        void render();
        View(sf::RenderWindow* window) : window(window) {};
    };
}