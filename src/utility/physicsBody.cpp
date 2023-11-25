//
// Created by Kars on 22-11-2023.
//

#include "physicsBody.h"


// Public:

float PhysicsBody::gravityStrength = 2.5f;

PhysicsBody::PhysicsBody(Object* object)
    : object(object) {
    velocity = 0.0f;
    gravityEnabled = true;
}

void PhysicsBody::update() {
    if (gravityEnabled) {
        applyGravity();
    }

    applyVelocity();
}

void PhysicsBody::setGravityEnabled(bool enabled) {
    this->gravityEnabled = enabled;
}

void PhysicsBody::resetVelocity() {
    this->velocity = 0.0f;
}

void PhysicsBody::addForce(float amount) {
    this->velocity -= amount;
}


// Private:

void PhysicsBody::applyVelocity() {
    object->move(Vector2(0, velocity));
}

void PhysicsBody::applyGravity() {
    this->velocity += PhysicsBody::gravityStrength;
}
