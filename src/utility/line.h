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
    std::string tag;

    Vector2 begin;
    Vector2 end;
public:
    Line(Vector2 begin, Vector2 end);
    Line(Vector2 begin, Vector2 end, std::string tag);

    std::string getTag();

    bool isLineInCollider(Collider other);
};


#endif //PROJECT_NAME_LINE_H
