//
// Created by Shadow on 11/21/2023.
//

#pragma once

#ifndef PROJECT_NAME_OBJECT_H
#define PROJECT_NAME_OBJECT_H

#include "vector2.h"
#include "SDL.h"
#include "color.h"

// An object
struct Object {
    SDL_Rect rect;
    Color color = Color(255, 255, 255);

    Vector2 position;
    Vector2 dimensions;

    Object();

    void move(Vector2 amount);
    void setPosition(Vector2 position);
    void updatePosition();
    void updateDimensions();
    void drawObject();
};


#endif //PROJECT_NAME_OBJECT_H
