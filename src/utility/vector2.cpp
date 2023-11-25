//
// Created by Shadow on 11/20/2023.
//

#include "vector2.h"
#include "SDL.h"

Vector2::Vector2(int x, int y)
    : x(x), y(y) {}

void Vector2::transform(Vector2 amount) {
    this->x += amount.x;
    this->y += amount.x;
}

bool const Vector2::operator>=(Vector2* other) const {
    return this->x >= other->x && this->y >= other->y;
}

bool const Vector2::operator<=(Vector2* other) const {
    return this->x <= other->x && this->y <= other->y;
}
