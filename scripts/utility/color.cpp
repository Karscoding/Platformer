//
// Created by Shadow on 11/20/2023.
//

#include "color.h"

Color::Color(int red, int green, int blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->alpha = 255;
}

void Color::changeOpacity(int alpha) {
    this->alpha = alpha;
}