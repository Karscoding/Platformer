//
// Created by Shadow on 11/21/2023.
//

#include "object.h"

#include "../main.h"

Object::Object()
    : position(0, 0), dimensions(0, 0) {
}

void Object::move(Vector2 amount) {
    this->position = position.transform(amount);
    updatePosition();
}

void Object::setPosition(Vector2 position) {
    this->position = position;
}

void Object::updatePosition() {
    this->rect.x = this->position.x;
    this->rect.y = this->position.y;
}

void Object::updateDimensions() {
    this->rect.w = this->dimensions.x;
    this->rect.h = this->dimensions.y;
}

void Object::drawObject() {
    SDL_SetRenderDrawColor(Game::getRenderer(), color.red, color.green, color.blue, color.alpha);
    SDL_RenderFillRect(Game::getRenderer(), &this->rect);
}
