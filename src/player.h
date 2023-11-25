//
// Created by Shadow on 11/20/2023.
//

#pragma once

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
    Player();

    void update() override;

    void onCollisionEnter(Collider* other);
    void onCollisionExit(Collider* lastTouched);
private:
    int speed;

    float jumpForce;

    bool isGrounded;

    PhysicsBody physicsBody;

    void resetPlayer();
};


#endif //PROJECT_NAME_PLAYER_H
