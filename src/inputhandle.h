//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef PROJECT_NAME_INPUTHANDLE_H
#define PROJECT_NAME_INPUTHANDLE_H

#include "SDL.h"


namespace Input {
    Uint8* getInput();
    bool checkInput(SDL_Scancode keycode);
}

#endif //PROJECT_NAME_INPUTHANDLE_H
