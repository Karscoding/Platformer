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
    isGrounded = false;
}

void PhysicsBody::run() {
    if (!isGrounded) {
        gravity();
        SDL_Log("IS NOT GROUNDED");
    } if (isGrounded) {
        resetVelocity();
        SDL_Log("IS GROUNDED");
    }
    applyVelocity();
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
