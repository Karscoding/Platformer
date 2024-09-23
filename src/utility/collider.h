//
// Created by Kars on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include <string>
#include "vector2.h"
#include "SDL_rect.h"

class Player;
class Object;

class Collider{
public:
    std::string tag;

    SDL_Rect* rect;

    explicit Collider(SDL_Rect* rect);

    bool isColliding(Collider* other);

private:
    Vector2* topLeftCorner;
    Vector2* bottomRightCorner;

    Collider* lastTouched;

    void updateCorners();
};

#endif //PROJECT_NAME_COLLIDER_H
