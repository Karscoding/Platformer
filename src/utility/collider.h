//
// Created by Shadow on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include "object.h"
#include <string>

class Player;

struct Collider{
    std::string tag;

    Vector2* position;
    Vector2* dimensions;

    Vector2* topLeftCorner;
    Vector2* bottomRightCorner;

    Object* object;
    Collider* lastTouched;

    Collider(Object* object);

    void updateCorners();

    void update(Player* player);
    Collider* runCollisionCheck();
    bool isColliding(Collider* other);
};

#endif //PROJECT_NAME_COLLIDER_H
