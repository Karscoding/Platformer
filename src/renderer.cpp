//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "main.h"
#include "utility/object.h"
#include "renderer.h"

void Renderer::render(SDL_Renderer* renderer, int &lastFrame) {
    SDL_Rect bg;
    bg.x = bg.y = 0;
    bg.w = 1280;
    bg.h = 720;
    SDL_SetRenderDrawColor(renderer, 50, 50, 50, 255);
    SDL_RenderFillRect(renderer, &bg);

    for (Object obj : objectList) {
        obj.drawObject(renderer);
    }

    int timerFPS = SDL_GetTicks() - lastFrame;
    if (timerFPS < (1000/60)) {
        SDL_Delay((1000/60)-timerFPS);
    }

    SDL_RenderPresent(renderer);
}

void Renderer::addObject(Object object) {
    objectList.push_front(object);
}