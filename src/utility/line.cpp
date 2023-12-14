//
// Created by Shadow on 12/12/2023.
//

#include "line.h"

Line::Line(Vector2 begin, Vector2 end)
    : begin(begin), end(end) {
    tag = "Default";
}

Line::Line(Vector2 begin, Vector2 end, std::string tag)
        : begin(begin), end(end), tag(tag) {}


bool Line::isLineInCollider(Collider other) {

}