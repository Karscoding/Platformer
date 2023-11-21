//
// Created by Shadow on 11/21/2023.
//

#ifndef PROJECT_NAME_OBJECT_H
#define PROJECT_NAME_OBJECT_H

#include "vector2.h"
#include "SDL.h"
#include "color.h"


struct Object {
    SDL_Rect rect;
    Color color = Color(255, 255, 255);

    Vector2 position = Vector2(0, 0);
    Vector2 dimensions = Vector2(0, 0);

    Object();

    void move(Vector2 amount);
    void updatePosition();
    void updateDimensions();
    void drawObject(SDL_Renderer* renderer);
};


#endif //PROJECT_NAME_OBJECT_H
