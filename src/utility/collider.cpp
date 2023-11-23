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
    this->topLeftCorner = new Vector2(this->position->x, this->position->y - this->dimensions->y);
    this->topRightCorner = new Vector2(this->position->x + this->dimensions->x, this->position->y - this->dimensions->y);
    this->bottomLeftCorner = new Vector2(this->position->x, this->position->y);
    this->bottomRightCorner = new Vector2(this->position->x + this->dimensions->x, this->position->y);
}

bool Collider::isColliding(Collider* other) {
    updateCorners();
    other->updateCorners();
    return other->bottomLeftCorner >= this->topLeftCorner && other->topLeftCorner <= this->bottomRightCorner;
}