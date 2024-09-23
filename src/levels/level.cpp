//
// Created by Shadow on 11/24/2023.
//

#include "level.h"

void Level::addObject(Object* object) {
    this->objectList.push_front(object);
}

std::list<Object *>* Level::getObjects() {
    return &objectList;
}

Player* Level::getPlayer() {
    return player;
}
