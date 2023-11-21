//
// Created by Shadow on 11/20/2023.
//

#ifndef PROJECT_NAME_VECTOR2_H
#define PROJECT_NAME_VECTOR2_H


struct Vector2 {
    int x, y;

    Vector2(int x, int y);
    Vector2 transform(Vector2 amount);
};


#endif //PROJECT_NAME_VECTOR2_H
