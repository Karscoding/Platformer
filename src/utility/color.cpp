//
// Created by Kars on 11/20/2023.
//

#include "color.h"


Color::Color(int red, int green, int blue)
    : red(red), green(green), blue(blue) {
    this->alpha = 255;
}

void Color::changeOpacity(int alpha) {
    this->alpha = alpha;
}