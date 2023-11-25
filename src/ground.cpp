//
// Created by Shadow on 11/23/2023.
//

#include "ground.h"


Ground::Ground(Vector2 position, Vector2 dimensions, Color color) {
    setPosition(position);
    setDimensions(dimensions);
    setColor(color);
    this->collider.tag = "Ground";
}

void Ground::update() {

}