//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "utility/vector2.h"
#include "utility/color.h"
#include "utility/object.h"

#ifndef PROJECT_NAME_PLAYER_H
#define PROJECT_NAME_PLAYER_H


class Player : public Object {
public:

    Player();

    void drawPlayer(SDL_Renderer* renderer);

    void move(int x, int y);
};


#endif //PROJECT_NAME_PLAYER_H
