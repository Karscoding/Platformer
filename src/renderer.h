//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef PROJECT_NAME_RENDERER_H
#define PROJECT_NAME_RENDERER_H

#include "SDL.h"
#include "objects/object.h"

class Game;

struct Renderer {
    Renderer();

    void render();
};

#endif //PROJECT_NAME_RENDERER_H