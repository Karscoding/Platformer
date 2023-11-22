//
// Created by Shadow on 11/20/2023.
//

#include "inputhandle.h"

namespace Input {
    Uint8* getInput() {
        return const_cast<Uint8 *>(SDL_GetKeyboardState(NULL));
    }

    bool checkInput(SDL_Scancode keycode) {
        return SDL_GetKeyboardState(NULL)[keycode];
    }
}