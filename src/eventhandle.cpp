//
// Created by Shadow on 11/20/2023.
//

#include "eventhandle.h"

void handleEvent(SDL_Event* event, Game& main) {
    while(SDL_PollEvent(event)) {
        if (event->type == SDL_QUIT) {
            main.quit();
        }
    }
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_ESCAPE))) {
        main.quit();
    }
}