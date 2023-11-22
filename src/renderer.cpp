//
// Created by Shadow on 11/20/2023.
//

#include "renderer.h"
#include "main.h"

Renderer::Renderer() {}

void Renderer::render(Game& game) {
    SDL_Rect bg;
    bg.x = bg.y = 0;
    bg.w = 1280;
    bg.h = 720;
    SDL_SetRenderDrawColor(game.renderer, 50, 50, 50, 255);
    SDL_RenderFillRect(game.renderer, &bg);

    for (Object obj : objectList) {
        obj.drawObject(game.renderer);
    }

    int timerFPS = SDL_GetTicks() - game.lastFrame;
    if (timerFPS < (1000/60)) {
        SDL_Delay((1000/60)-timerFPS);
    }
}

void Renderer::addObject(Object object) {
    objectList.push_front(object);
}