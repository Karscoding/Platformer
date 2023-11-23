#include "main.h"

#define WIDTH 1280
#define HEIGHT 720

#define DEBUG_MODE true

SDL_Renderer* Game::renderer;

Player* Game::player = new Player();

int main(int argc, char* args []) {
    SDL_Init(SDL_INIT_VIDEO);
    Game game;

    game.window = SDL_CreateWindow("Platformer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if (game.window == nullptr) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return 1;
    }

    game.customRenderer.addObject(game.player);
    game.customRenderer.addObject(game.ground);
//    game.customRenderer.addObject(game.ground2);

    Game::setRenderer(SDL_CreateRenderer(game.window, -1, SDL_RENDERER_ACCELERATED));
    if (Game::renderer == nullptr) {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(game.window);
        SDL_Quit();
        return 1;
    }

    Game::running = true;
    SDL_Event event;

    while (Game::running) {
        game.run();
    }

    SDL_DestroyRenderer(game.renderer);
    SDL_DestroyWindow(game.window);
    SDL_Quit();
    return 0;
}

Game::Game()
    : ground(new Ground(Vector2(300, 400), Vector2(600, 200), Color(255, 255, 255)))//,
//    ground2(new Ground(Vector2(950, 500), Vector2(200, 100), Color(255, 255, 255)))
    {}

void Game::run() {
    handleEvent(&event, *this);
    player->update();
    ground->update();
//    ground2->update();
    Game::lastFrame = SDL_GetTicks();
    customRenderer.render();
    SDL_RenderPresent(renderer);
}

void Game::quit() {
    Game::running = false;
}

SDL_Renderer* Game::getRenderer() {
    return renderer;
}

void Game::setRenderer(SDL_Renderer* renderer) {
    Game::renderer = renderer;
}
