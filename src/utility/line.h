//
// Created by Shadow on 12/12/2023.
//

#ifndef PROJECT_NAME_LINE_H
#define PROJECT_NAME_LINE_H

#include "vector2.h"
#include "collider.h"
#include <string>

class Line {
private:

    Vector2 begin;
    Vector2 end;
public:
    std::string tag;

    Line(Vector2 begin, Vector2 end);
    Line(Vector2 begin, Vector2 end, std::string tag);

    bool isLineInCollider(Collider other);
};


#endif //PROJECT_NAME_LINE_H
