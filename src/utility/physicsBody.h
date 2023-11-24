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

    bool gravityEnabled;

    Object* object;

    PhysicsBody(Object* object);
    void run();

    void addForce(float amount);

    void setGravityEnabled(bool enabled);

    void resetVelocity();
    void applyVelocity();
    void gravity();
};


#endif //PROJECT_NAME_PHYSICSBODY_H
