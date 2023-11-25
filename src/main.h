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
    static Renderer customRenderer;

    static Player* player;

    static std::list<Object*> objectList;
    static Level* currentLevel;

    Game();

    static SDL_Renderer* getRenderer();
    static Level* getCurrentLevel();
    static void setRenderer(SDL_Renderer* renderer);
    void run();
    static void quit();
    void updateAll();
};

#endif //MAIN_H
