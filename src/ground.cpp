//
// Created by Shadow on 11/23/2023.
//

#include "ground.h"
#include "player.h"
#include "main.h"


Ground::Ground(Vector2 position, Vector2 dimensions, Color color)
    : collider(this) {
    this->position = position;
    this->dimensions = dimensions;
    this->color = color;

    updatePosition();
    updateDimensions();
}

void Ground::update() {
    if (collider.isColliding(Game::player->getCollider())) {
        Game::player->setGrounded(true);
    } else {
        Game::player->setGrounded(false);
    }
}