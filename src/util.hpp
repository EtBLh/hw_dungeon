#ifndef UTIL_H
#define UTIL_H

#include <nlohmann/json.hpp>
#include <fstream>
#include <streambuf>
#include <cstring>
#include <functional>
#include "const.h"
#include <cmath>

using namespace nlohmann;
using namespace std;
namespace Dungeon{
    typedef struct _vector_d
    {
        float x = 0, y = 0;
        _vector_d(float x, float y): x(x), y(y) {};
        _vector_d() {};
        _vector_d operator=(const _vector_d& a){
            x = a.x;
            y = a.y;
            return *this;
        }
        _vector_d operator+(const _vector_d& a){
            return _vector_d(x+a.x,y+a.y);
        } 
        _vector_d operator-(const _vector_d& a){
            return _vector_d(x-a.x,y-a.y);
        }
    } vector_d;
    inline vector_d conv_real_pos(vector_d virtual_pos){
        return vector_d(virtual_pos.x*SCALER*BLOCK_WIDTH, virtual_pos.y*SCALER*BLOCK_WIDTH);
    }
    typedef struct _rect{
        float x = 0, y = 0, width = 0, height = 0;
        _rect(float x, float y, float width, float height):
            x(x),y(y),width(width),height(height){};
        _rect(vector_d pos, float width, float height):
            x(pos.x), y(pos.y), width(width), height(height) {};
        _rect operator+(const _vector_d& a){
            return _rect(a.x+x,a.y+y,width,height);
        } 
    } rect;
    const auto is_collide = [](rect rect1, rect rect2) -> bool{
        return (rect1.x < rect2.x + rect2.width &&
                rect1.x + rect1.width > rect2.x &&
                rect1.y < rect2.y + rect2.height &&
                rect1.y + rect1.height > rect2.y);
    };
    const auto distance = [](rect rect1, rect rect2) -> float{
        vector_d pos1((rect1.x+rect1.width)/2,
                      (rect1.y+rect1.height)/2);
        vector_d pos2((rect2.x+rect2.width)/2,
                      (rect2.y+rect2.height)/2);
        return sqrt(pow(pos1.x-pos2.x,2) + pow(pos1.y-pos2.y,2));
    };
    const auto load_json_file = [](string path) -> json{
        ifstream input(path);
        json _json;
        input >> _json;
        return _json;
    };
}

#endif 