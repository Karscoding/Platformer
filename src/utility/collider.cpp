//
// Created by Kars on 11/21/2023.
//

#include "collider.h"
#include "../main.h"


// Public:

Collider::Collider(Object* object)
    : object(object) {
    this->position = &object->position;
    this->dimensions = &object->dimensions;
    this->tag = "Default";

    updateCorners();
}

void Collider::update(void(*onCollisionFunction)(Collider* other)) {
    if (runCollisionCheck() != nullptr) {
        lastTouched = runCollisionCheck();
        onCollisionFunction(lastTouched);
    } else {
        onCollisionFunction(lastTouched);
    }
}


// Private:

void Collider::updateCorners() {
    this->topLeftCorner = new Vector2(this->position->x, this->position->y - 5);
    this->bottomRightCorner = new Vector2(this->position->x + this->dimensions->x, this->position->y + this->dimensions->y + 5);
}

Collider* Collider::runCollisionCheck() {
    for (Object* object : Game::getCurrentLevel()->objectList) {
        if (this->isColliding(&object->collider)) {
            return &object->collider;
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