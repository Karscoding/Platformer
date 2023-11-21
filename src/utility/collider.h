//
// Created by Shadow on 11/21/2023.
//

#ifndef PROJECT_NAME_COLLIDER_H
#define PROJECT_NAME_COLLIDER_H

#include "object.h"

struct Collider : public Object{
    bool isColliding(Collider &other);
};

#endif //PROJECT_NAME_COLLIDER_H
