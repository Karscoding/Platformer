//
// Created by Shadow on 11/20/2023.
//

#include "debug.h"

namespace Debug {
    void log(const char* message) {
        SDL_Log(message);
    }
}