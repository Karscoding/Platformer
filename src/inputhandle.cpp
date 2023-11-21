//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"

Uint8* getInput() {
    return const_cast<Uint8 *>(SDL_GetKeyboardState(NULL));
}