//
// Created by Kars on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include <string>
#include "vector2.h"

class Player;
class Object;

class Collider{
public:
    std::string tag;

    Object* object;

    explicit Collider(Object* object);

    void update(Player* player);

private:
    Vector2* topLeftCorner;
    Vector2* bottomRightCorner;

    Collider* lastTouched;

    void updateCorners();
    Collider* runCollisionCheck();
    bool isColliding(Collider* other);
};

#endif //PROJECT_NAME_COLLIDER_H
