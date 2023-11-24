//
// Created by Shadow on 11/20/2023.
//

#pragma once

#ifndef PROJECT_NAME_VECTOR2_H
#define PROJECT_NAME_VECTOR2_H

// Simple struct to store 2D positions
struct Vector2 {
    int x, y;

    Vector2(int x, int y);
    Vector2 transform(Vector2 amount);

    bool operator>= (Vector2* other) const;
    bool operator<= (Vector2* other) const;
};


#endif //PROJECT_NAME_VECTOR2_H
