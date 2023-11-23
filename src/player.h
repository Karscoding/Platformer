//
// Created by Shadow on 11/20/2023.
//

#pragma once

#include "SDL.h"
#include "utility/vector2.h"
#include "utility/color.h"
#include "utility/object.h"
#include "utility/color.h"
#include "utility/physicsBody.h"
#include "utility/collider.h"
#include "inputhandle.h"
#include "SDL.h"

#ifndef PROJECT_NAME_PLAYER_H
#define PROJECT_NAME_PLAYER_H


class Player : public Object {
public:
    int speed;

    PhysicsBody physicsBody;
    Collider collider;

    Player();

    void update();

    void debugging();
};


#endif //PROJECT_NAME_PLAYER_H
