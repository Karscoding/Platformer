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
    this->position = new Vector2(PLAYER_SPAWN_X, PLAYER_SPAWN_Y);
    this->dimensions = new Vector2(PLAYER_WIDTH, PLAYER_HEIGHT);
    this->color = new Color(PLAYER_RED, PLAYER_GREEN, PLAYER_BLUE);

    updatePosition();
    updateDimensions();
}

void Player::move(int x, int y) {
    this->position->x += x;
    this->position->y += y;
}

void Player::drawPlayer(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, color->red, color->green, color->blue, color->alpha);
    SDL_RenderFillRect(renderer, &rect);
}

void Player::updatePosition() {
    rect.x = position->x;
    rect.y = position->y;
}

void Player::updateDimensions() {
    rect.h = dimensions->y;
    rect.w = dimensions->x;
}