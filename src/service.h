#pragma once
#include "dto.h"

namespace Dungeon{
    class Service{
        private:
            Dto& dto = Dto::getInstance();
        public:
            Service() {};
            void init();
    };
}