#include <SDL.h>
#include "renderer.h"
#include "eventhandle.h"
#include "debug.h"
#include "main.h"
#include "player.h"

#define WIDTH 1280
#define HEIGHT 720

#define DEBUG_MODE true

Main::Main() {

}

void Main::run() {
    handleEvent(&event, *this);
    lastFrame = SDL_GetTicks();
    customRenderer.render(renderer, lastFrame);
}

void Main::quit() {
    this->running = false;
}

int main(int argc, char* args []) {
    Main main;

    SDL_Init(SDL_INIT_VIDEO);

    main.window = SDL_CreateWindow("Platformer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if (main.window == nullptr) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return 1;
    }

    main.customRenderer.addObject(main.player);

    main.renderer = SDL_CreateRenderer(main.window, -1, SDL_RENDERER_ACCELERATED);
    if (main.renderer == nullptr) {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(main.window);
        SDL_Quit();
        return 1;
    }

    main.running = true;
    SDL_Event event;

    while (main.running) {
        main.run();
    }

    SDL_DestroyRenderer(main.renderer);
    SDL_DestroyWindow(main.window);
    SDL_Quit();
    return 0;
}
