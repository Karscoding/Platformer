//
// Created by Shadow on 11/20/2023.
//

#include "player.h"

#define PLAYER_WIDTH 64
#define PLAYER_HEIGHT 64

#define PLAYER_SPAWN_X 250
#define PLAYER_SPAWN_Y 250

#define PLAYER_RED 255
#define PLAYER_GREEN 255
#define PLAYER_BLUE 255

Player::Player() {
    this->position = Vector2(PLAYER_SPAWN_X, PLAYER_SPAWN_Y);
    this->dimensions = Vector2(PLAYER_WIDTH, PLAYER_HEIGHT);
    this->color = Color(PLAYER_RED, PLAYER_GREEN, PLAYER_BLUE);

    updatePosition();
    updateDimensions();
}

void Player::update() {
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_A))) {
        move(Vector2(-speed, 0));
    }
    if (Input::checkInput(SDL_Scancode(SDL_SCANCODE_D))) {
        move(Vector2(speed, 0));
    }
}