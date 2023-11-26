//
// Created by Shadow on 11/20/2023.
//

#include "renderer.h"
#include "main.h"

int Game::lastFrame;

Renderer::Renderer() {}

void Renderer::render() {
    SDL_Rect bg;

    bg.x = bg.y = 0;
    bg.w = 1280;
    bg.h = 720;

    SDL_SetRenderDrawColor(Game::getRenderer(), 50, 50, 50, 255);
    SDL_RenderFillRect(Game::getRenderer(), &bg);



    if (!Game::getCurrentLevel()->getObjects()->empty()) {
        for (Object* obj : *Game::getCurrentLevel()->getObjects()) {
            SDL_SetRenderDrawColor(Game::getRenderer(), obj->color.red, obj->color.green,obj->color.blue, 255);
            SDL_RenderFillRect(Game::getRenderer(), &obj->rect);
        }
    }



    int timerFPS = SDL_GetTicks() - Game::lastFrame;
    if (timerFPS < (1000/60)) {
        SDL_Delay((1000/60)-timerFPS);
    }
}