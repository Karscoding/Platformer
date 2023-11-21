//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "main.h"
#include "inputhandle.h"

void handleEvent(SDL_Event* event, Main& main) {
    while(SDL_PollEvent(event)) {
        if (event->type == SDL_QUIT) {
            main.quit();
        }
    }
    if (getInput()[SDL_SCANCODE_ESCAPE]) {
        main.quit();
    }
}