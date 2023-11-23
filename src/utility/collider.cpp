//
// Created by Shadow on 11/21/2023.
//

#include "collider.h"

Collider::Collider(Object* object)
    : object(object) {
    this->position = &object->position;
    this->dimensions = &object->dimensions;

    updateCorners();
}

void Collider::updateCorners() {
    this->topLeftCorner = new Vector2(this->position->x, this->position->y);
    this->bottomRightCorner = new Vector2(this->position->x + this->dimensions->x, this->position->y + this->dimensions->y);
}

bool Collider::isColliding(Collider* other) {
    updateCorners();
    other->updateCorners();
    if (this->topLeftCorner->operator<=(other->bottomRightCorner) && this->bottomRightCorner->operator>=(other->topLeftCorner)) {
        return true;
    } else {
        return false;
    }
}