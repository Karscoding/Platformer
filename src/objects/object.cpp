//
// Created by Kars on 11/21/2023.
//

#include "object.h"
#include "../main.h"

// Public:

Object::Object()
    : position(0, 0), dimensions(0, 0), collider(&this->rect) {}

void Object::move(Vector2 amount) {
    this->position = position.transform(amount);
    updatePosition();
}

void Object::setPosition(Vector2 position) {
    this->position = position;
    updatePosition();
}

void Object::setDimensions(Vector2 dimensions) {
    this->dimensions = dimensions;
    updateDimensions();
}

void Object::setColor(Color color) {
    this->color = color;
}

void Object::collisionCheck() {
    for (Object* obj : *Game::currentLevel.getObjects()) {
        if (this->collider.isColliding(&obj->collider)) {
            lastTouched = &obj->collider;
            this->onCollisionEnter(&obj->collider);
        } else {
            this->onCollisionExit(lastTouched);
        }
    }
}

// Private:

void Object::updatePosition() {
    this->rect.x = this->position.x;
    this->rect.y = this->position.y;
}

void Object::updateDimensions() {
    this->rect.w = this->dimensions.x;
    this->rect.h = this->dimensions.y;
}
