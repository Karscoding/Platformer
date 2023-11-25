//
// Created by Kars on 22-11-2023.
//

#ifndef PROJECT_NAME_PHYSICSBODY_H
#define PROJECT_NAME_PHYSICSBODY_H


#include "object.h"


// Class that adds applyGravity physics to something
class PhysicsBody {
public:
    static float gravityStrength;

    PhysicsBody(Object* object);

    void update();

    void setGravityEnabled(bool enabled);
    void resetVelocity();

    void addForce(float amount);
private:
    float velocity;

    bool gravityEnabled;

    Object* object;

    void applyVelocity();
    void applyGravity();
};


#endif //PROJECT_NAME_PHYSICSBODY_H
