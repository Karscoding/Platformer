//
// Created by Kars on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_OBJECT_H
#define PROJECT_NAME_OBJECT_H

#include "vector2.h"
#include "SDL.h"
#include "color.h"
#include "collider.h"

// An object
class Object {
public:
    SDL_Rect rect;

    Collider collider;

    Vector2 position;
    Vector2 dimensions;

    Color color = Color(255, 255, 255);

    Object();

    virtual void update() = 0;

    void move(Vector2 amount);

    void setPosition(Vector2 position);
    void setDimensions(Vector2 dimensions);
    void setColor(Color color);
private:
    void updatePosition();
    void updateDimensions();
};


#endif //PROJECT_NAME_OBJECT_H
