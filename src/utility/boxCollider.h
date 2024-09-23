//
// Created by Shadow on 12/14/2023.
//

#ifndef PROJECT_NAME_BOXCOLLIDER_H
#define PROJECT_NAME_BOXCOLLIDER_H

#include "collider.h"


class BoxCollider {
private:
    Vector2* coords;
    Collider* topZone;
    Collider* leftZone;
    Collider* rightZone;
    Collider* bottomZone;
    Collider* middleZone;
public:
    BoxCollider(Object* object);
};


#endif //PROJECT_NAME_BOXCOLLIDER_H
