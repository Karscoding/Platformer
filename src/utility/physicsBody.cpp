//
// Created by karsh on 22-11-2023.
//

#include "physicsBody.h"
#include "../main.h"

bool Game::running;


float PhysicsBody::gravityStrength = 5.0f;

PhysicsBody::PhysicsBody(Object* object)
    : object(object) {
    velocity = 0.0f;
    gravityEnabled = true;
}

void PhysicsBody::run() {
    if (gravityEnabled) {
        gravity();
        applyVelocity();
    }
}

void PhysicsBody::addForce(float amount) {
    velocity += amount;
}

void PhysicsBody::setGravityEnabled(bool enabled) {
    this->gravityEnabled = enabled;
}

void PhysicsBody::resetVelocity() {
    velocity = 0.0f;
}

void PhysicsBody::applyVelocity() {
    object->move(Vector2(0, velocity));
}

void PhysicsBody::gravity() {
    this->velocity += PhysicsBody::gravityStrength;
}
