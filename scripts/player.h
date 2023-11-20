//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "utility/vector2.h"
#include "utility/color.h"

#ifndef PROJECT_NAME_PLAYER_H
#define PROJECT_NAME_PLAYER_H


class Player {
public:
    SDL_Rect rect;
    Color* color;
    Vector2* position;
    Vector2* dimensions;

    Player();

    void drawPlayer(SDL_Renderer* renderer);

    void move(int x, int y);

    void updatePosition();
    void updateDimensions();
};


#endif //PROJECT_NAME_PLAYER_H
