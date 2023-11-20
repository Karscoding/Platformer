//
// Created by Shadow on 11/20/2023.
//

#include "vector2.h"

Vector2::Vector2(int x, int y) {
    this->x = x;
    this->y = y;
}

Vector2 Vector2::transform(int x, int y) {
    return Vector2(this->x + x, this->y + y);
}