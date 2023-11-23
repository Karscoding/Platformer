//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef MAIN_H
#define MAIN_H

#include "player.h"
#include "renderer.h"
#include "SDL.h"
#include "eventhandle.h"
#include "debug.h"
#include "player.h"
#include "ground.h"

class Game {
public:
    static int lastFrame;

    static bool running;
    SDL_Event event;
    SDL_Window* window;
    static SDL_Renderer* renderer;
    Renderer customRenderer = Renderer();

    static Player* player;
    Ground* ground;
//    Ground* ground2;

    Game();

    static SDL_Renderer* getRenderer();
    static void setRenderer(SDL_Renderer* renderer);
    void run();
    void quit();
};

#endif //MAIN_H
