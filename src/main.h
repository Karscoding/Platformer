//
// Created by Shadow on 11/20/2023.
//

#ifndef PROJECT_NAME_MAIN_H
#define PROJECT_NAME_MAIN_H

#include "player.h"
#include "renderer.h"

class Main {
public:
    int lastFrame;

    bool running;
    SDL_Event event;
    SDL_Window* window;
    SDL_Renderer* renderer;
    Renderer customRenderer = Renderer();

    Player player;

    Main();

    void run();
    void quit();
};

#endif //PROJECT_NAME_MAIN_H
