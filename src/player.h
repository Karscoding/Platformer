//
// Created by Shadow on 11/20/2023.
//

#pragma once

#include "SDL.h"
#include "utility/vector2.h"
#include "utility/color.h"
#include "utility/object.h"
#include "utility/color.h"
#include "inputhandle.h"
#include "SDL.h"

#ifndef PROJECT_NAME_PLAYER_H
#define PROJECT_NAME_PLAYER_H


class Player : public Object {
public:
    int speed;

    Player();

    void update();
    void moveAttempt();

    void debugging();
};


#endif //PROJECT_NAME_PLAYER_H
