#pragma once
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
#include "sprite_loader.h"
#include "../node/character.h"
#include "../dto.h"

using namespace nlohmann;
namespace Dungeon{
    class View{
    private:
        Dto& dto = Dto::getInstance();
        sprite_loader _sprite_loader;
        sf::RenderWindow* window;
        sf::Font font;
        void draw_map_layer(json layer);
        void draw_character(Character* charac);
        void draw_particle(particle* partic);
    public:
        void render();
        View(sf::RenderWindow* window) : window(window) {
            dto._sprite_loader = &_sprite_loader;
            if(!font.loadFromFile("res/fonts/ARCADECLASSIC.TTF")){
                cout << "font loading error" << endl;
            };
        };
    };
}