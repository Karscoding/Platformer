//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef MAIN_H
#define MAIN_H

#include "objects/player.h"
#include "renderer.h"
#include "SDL.h"
#include "eventhandle.h"
#include "debug.h"
#include "objects/player.h"
#include "objects/ground.h"
#include "levels/level.h"
#include "levels/level1.h"

class Game {
public:
    static int lastFrame;

    static bool running;
    SDL_Event event;
    SDL_Window* window;
    static SDL_Renderer* renderer;
    static Renderer customRenderer;

    static Level currentLevel;

    Game();

    static SDL_Renderer* getRenderer();
    static Level* getCurrentLevel();
    static void setRenderer(SDL_Renderer* renderer);
    void run();
    static void quit();
    void updateAll();
};

#endif //MAIN_H
