//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef PROJECT_NAME_RENDERER_H
#define PROJECT_NAME_RENDERER_H

#include "SDL.h"
#include "utility/object.h"
#include <list>

class Game;

struct Renderer {
    std::list<Object> objectList;

    Renderer();

    void render(Game& game);
    void addObject(Object object);
};

#endif //PROJECT_NAME_RENDERER_H