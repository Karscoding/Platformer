//
// Created by Shadow on 11/23/2023.
//

#ifndef PROJECT_NAME_GROUND_H
#define PROJECT_NAME_GROUND_H

#include "utility/object.h"
#include "utility/collider.h"


class Ground : public Object {
public:
    Ground(Vector2 position, Vector2 dimensions, Color color);
};


#endif //PROJECT_NAME_GROUND_H
