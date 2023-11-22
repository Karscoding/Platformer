//
// Created by Shadow on 11/21/2023.
//

#include "object.h"

Object::Object() {

}

void Object::move(Vector2 amount) {
    this->position = position.transform(amount);
    updatePosition();
}

void Object::updatePosition() {
    this->rect.x = this->position.x;
    this->rect.y = this->position.y;
}

void Object::updateDimensions() {
    this->rect.w = this->dimensions.x;
    this->rect.h = this->dimensions.y;
}

void Object::drawObject(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, color.red, color.green, color.blue, color.alpha);
    SDL_RenderFillRect(renderer, &rect);
}
