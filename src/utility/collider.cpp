//
// Created by Shadow on 11/21/2023.
//

#include "collider.h"
#include "../main.h"

Collider::Collider(Object* object)
    : object(object) {
    this->position = &object->position;
    this->dimensions = &object->dimensions;
    this->tag = "Default";

    updateCorners();
}

void Collider::updateCorners() {
    this->topLeftCorner = new Vector2(this->position->x, this->position->y - 5);
    this->bottomRightCorner = new Vector2(this->position->x + this->dimensions->x, this->position->y + this->dimensions->y + 5);
}

void Collider::update(Player* player) {
    if (runCollisionCheck() != nullptr) {
        lastTouched = runCollisionCheck();
        player->onCollision(lastTouched);
    } else {
        player->onCollisionExit(lastTouched);
    }
}

Collider* Collider::runCollisionCheck() {
    for (Ground* ground : Game::getCurrentLevel()->groundObjects) {
        if (this->isColliding(&ground->collider)) {
            return &ground->collider;
        }
    }
    return nullptr;
}

// todo : should probably change this to isCollingTop and then add a isCollingSide to know the difference.
bool Collider::isColliding(Collider* other) {
    updateCorners();
    other->updateCorners();
    if (this->topLeftCorner->operator<=(other->bottomRightCorner) && this->bottomRightCorner->operator>=(other->topLeftCorner)) {
        return true;
    } else {
        return false;
    }
}