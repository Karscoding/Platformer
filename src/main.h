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
#include "level.h"
#include "level1.h"

class Game {
public:
    static int lastFrame;

    static bool running;
    SDL_Event event;
    SDL_Window* window;
    static SDL_Renderer* renderer;
    Renderer customRenderer = Renderer();

    static Player* player;

    std::list<Level*> levelList;
    static Level* currentLevel;

    Game();

    static SDL_Renderer* getRenderer();
    static Level* getCurrentLevel();
    static void setRenderer(SDL_Renderer* renderer);
    void run();
    void quit();
};

#endif //MAIN_H
