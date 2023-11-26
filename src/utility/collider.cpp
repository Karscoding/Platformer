//
// Created by Kars on 11/21/2023.
//

#include "collider.h"
#include "../main.h"


// Public:

Collider::Collider(Object* object)
    : object(object) {
    this->tag = "Default";

    updateCorners();
}

void Collider::update() {
    if (runCollisionCheck() != nullptr) {
        lastTouched = runCollisionCheck();
        this->object->onCollisionEnter(lastTouched);
    } else {
        this->object->onCollisionExit(lastTouched);
    }
}


// Private:

void Collider::updateCorners() {
    this->topLeftCorner = new Vector2(object->position.x, object->position.y);
    this->bottomRightCorner = new Vector2(object->position.x + object->dimensions.x, object->position.y + object->dimensions.y + 5);
}

Collider* Collider::runCollisionCheck() {
    // TODO: FIX, never returns nullptr for some reason...
    for (Object* obj : *Game::currentLevel.getObjects()) {
        if (this->isColliding(&obj->collider)) {
            return &obj->collider;
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