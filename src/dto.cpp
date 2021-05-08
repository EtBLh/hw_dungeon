#include "dto.h"
#include <cstring>

using namespace Dungeon;

Dto& Dto::getInstance()
{
    static Dto instance;
    return instance;
}

void Dto::set_game_state(bool s){game_state = s;}

void Dto::talk(string content){
    is_talking = true;
    const int line_max_num = 48;
    if (content.length() > line_max_num){
        int char_num = 0;
        for (size_t i = 0; i < content.length(); i++){
            if (content[i] == '\n') char_num = 0;
            else if (content[i] == ' ' && char_num >= line_max_num){
                content.insert(i,"\n");
                char_num = 0;
            } else char_num++;
        }
    }
    talk_content = content;
}