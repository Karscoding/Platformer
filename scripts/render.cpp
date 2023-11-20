//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "main.h"

void render(SDL_Renderer* renderer, Main& main) {
    SDL_Rect bg;
    bg.x = bg.y = 0;
    bg.w = 1280;
    bg.h = 720;
    SDL_SetRenderDrawColor(renderer, 50, 50, 50, 255);
    SDL_RenderFillRect(renderer, &bg);

    main.player.drawPlayer(main.renderer);

    int timerFPS = SDL_GetTicks() - main.lastFrame;
    if (timerFPS < (1000/60)) {
        SDL_Delay((1000/60)-timerFPS);
    }

    SDL_RenderPresent(renderer);
}