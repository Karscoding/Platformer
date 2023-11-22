#include "main.h"

#define WIDTH 1280
#define HEIGHT 720

#define DEBUG_MODE true

int main(int argc, char* args []) {
    SDL_Init(SDL_INIT_VIDEO);
    Game game;

    game.window = SDL_CreateWindow("Platformer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if (game.window == nullptr) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return 1;
    }

    game.customRenderer.addObject(game.player);

    game.renderer = SDL_CreateRenderer(game.window, -1, SDL_RENDERER_ACCELERATED);
    if (game.renderer == nullptr) {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(game.window);
        SDL_Quit();
        return 1;
    }

    game.running = true;
    SDL_Event event;

    while (game.running) {
        game.run();
    }

    SDL_DestroyRenderer(game.renderer);
    SDL_DestroyWindow(game.window);
    SDL_Quit();
    return 0;
}

Game::Game() {

}

void Game::run() {
    handleEvent(&event, *this);
    player.update();
    lastFrame = SDL_GetTicks();
    customRenderer.render(*this);
    SDL_RenderPresent(renderer);
}

void Game::quit() {
    this->running = false;
}
