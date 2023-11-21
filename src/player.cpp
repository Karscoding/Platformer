//
// Created by Shadow on 11/20/2023.
//

#include "player.h"
#include "utility/color.h"

#define PLAYER_WIDTH 32
#define PLAYER_HEIGHT 32

#define PLAYER_SPAWN_X 64
#define PLAYER_SPAWN_Y 64

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