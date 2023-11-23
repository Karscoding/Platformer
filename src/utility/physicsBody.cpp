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
        SDL_Log("!isGrounded");
        gravity();
    } if (isGrounded) {
        SDL_Log("isGrounded");
        velocity = 0.0f;
    }
    applyVelocity();
}

void PhysicsBody::applyVelocity() {
    object->move(Vector2(0, velocity));
}

void PhysicsBody::gravity() {
    this->velocity += PhysicsBody::gravityStrength;
}
