//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef PROJECT_NAME_VECTOR2_H
#define PROJECT_NAME_VECTOR2_H


struct Vector2 {
    int x, y;

    Vector2(int x, int y);
    Vector2 transform(Vector2 amount);

    bool const operator>= (Vector2* other) const;
    bool const operator<= (Vector2* other) const;
};


#endif //PROJECT_NAME_VECTOR2_H
