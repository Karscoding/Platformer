//
// Created by Shadow on 11/20/2023.
//

#include "SDL.h"
#include "main.h"
#include "utility/object.h"
#include <list>

#ifndef PROJECT_NAME_RENDER_H
#define PROJECT_NAME_RENDER_H

struct Renderer {
    std::list<Object> objectList;
    void render(SDL_Renderer* renderer, int &lastFrame);
    void addObject(Object object);
};

#endif //PROJECT_NAME_RENDER_H
