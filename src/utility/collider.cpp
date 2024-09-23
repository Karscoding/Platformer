//
// Created by Kars on 11/21/2023.
//

#include "collider.h"
#include "../main.h"


// Public:

Collider::Collider(SDL_Rect* rect)
    : rect(rect) {
    this->tag = "Default";

    updateCorners();
}

// Private:

void Collider::updateCorners() {
    this->topLeftCorner = new Vector2(rect->x, rect->y);
    this->bottomRightCorner = new Vector2(rect->x + rect->w, rect->y + rect->h + 5);
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