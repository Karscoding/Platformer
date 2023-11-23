//
// Created by Shadow on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include "object.h"

struct Collider{
    Vector2* position;
    Vector2* dimensions;

    Vector2* topLeftCorner;
    Vector2* topRightCorner;
    Vector2* bottomLeftCorner;
    Vector2* bottomRightCorner;

    Object* object;

    Collider(Object* object);

    void updateCorners();
    bool isColliding(Collider* other);
};

#endif //PROJECT_NAME_COLLIDER_H
