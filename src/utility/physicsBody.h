//
// Created by karsh on 22-11-2023.
//

#ifndef PROJECT_NAME_PHYSICSBODY_H
#define PROJECT_NAME_PHYSICSBODY_H


#include "object.h"


// Class that adds gravity physics to something
struct PhysicsBody {
    float velocity;
    static float gravityStrength;
    bool isGrounded;

    Object* object;

    PhysicsBody(Object* object);
    void run();
    void applyVelocity();
    void gravity();
};


#endif //PROJECT_NAME_PHYSICSBODY_H
