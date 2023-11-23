//
// Created by Shadow on 11/20/2023.
//

#include "vector2.h"

Vector2::Vector2(int x, int y)
    : x(x), y(y) {}

Vector2 Vector2::transform(Vector2 amount) {
    return Vector2(this->x + amount.x, this->y + amount.y);
}

bool Vector2::operator>=(Vector2 other) {
    return other.x >= this->x && other.y >= this->y;
}

bool Vector2::operator<=(Vector2 other) {
    return other.x <= this->x && other.y <= this->y;
}
