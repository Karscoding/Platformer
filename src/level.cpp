//
// Created by Shadow on 11/24/2023.
//

#include "level.h"

void Level::addGroundObject(Ground *ground) {
    this->groundObjects.push_front(ground);
}