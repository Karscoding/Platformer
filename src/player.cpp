//
// Created by Shadow on 11/20/2023.
//

#include "player.h"

#define PLAYER_WIDTH 64
#define PLAYER_HEIGHT 64

#define PLAYER_SPAWN_X 400
#define PLAYER_SPAWN_Y 200

#define PLAYER_RED 255
#define PLAYER_GREEN 255
#define PLAYER_BLUE 255

#define PLAYER_SPEED 15
#define PLAYER_JUMP_FORCE 35.0f

Player::Player()
    : physicsBody(this), collider(this) {
    this->position = Vector2(PLAYER_SPAWN_X, PLAYER_SPAWN_Y);
    this->dimensions = Vector2(PLAYER_WIDTH, PLAYER_HEIGHT);
    this->color = Color(PLAYER_RED, PLAYER_GREEN, PLAYER_BLUE);
    this->speed = PLAYER_SPEED;
    this->jumpForce = PLAYER_JUMP_FORCE;

    updatePosition();
    updateDimensions();
}

void Player::update() {
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_A)) || Input::checkInput(SDL_Scancode(SDL_SCANCODE_LEFT))) {
        move(Vector2(-speed, 0));
    }
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_D)) || Input::checkInput(SDL_Scancode(SDL_SCANCODE_RIGHT))) {
        move(Vector2(speed, 0));
    }
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_R))) {
        resetPlayer();
    }
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_SPACE)) && isGrounded) {
        physicsBody.resetVelocity();
        physicsBody.addForce(jumpForce);
        isGrounded = false;
    }

    physicsBody.run();

    collider.update(this);
}

void Player::onCollision(Collider *other) {
    if (other->tag == "Ground") {
        physicsBody.resetVelocity();
        physicsBody.setGravityEnabled(false);
        setPosition(Vector2(position.x, other->position->y - dimensions.y));
        isGrounded = true;
    }
}

void Player::onCollisionExit(Collider* lastTouched) {
    isGrounded = false;
    physicsBody.setGravityEnabled(true);
}

void Player::setGrounded(bool value) {
    isGrounded = value;
}

PhysicsBody* Player::getPhysicsBody() {
    return &physicsBody;
}

Collider* Player::getCollider() {
    return &collider;
}

void Player::resetPlayer() {
    setPosition(Vector2(PLAYER_SPAWN_X, PLAYER_SPAWN_Y));
    this->physicsBody.resetVelocity();
}