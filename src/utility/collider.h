//
// Created by Kars on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include "object.h"
#include <string>

class Player;

class Collider{
public:
    std::string tag;

    Vector2* position;
    Vector2* dimensions;

    Collider(Object* object);
    void update(void(*onCollisionFunction)(Collider* other));

private:
    Vector2* topLeftCorner;
    Vector2* bottomRightCorner;

    Object* object;
    Collider* lastTouched;

    void updateCorners();
    Collider* runCollisionCheck();
    bool isColliding(Collider* other);
};

#endif //PROJECT_NAME_COLLIDER_H
