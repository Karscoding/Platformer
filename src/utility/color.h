//
// Created by Shadow on 11/20/2023.
//

#ifndef PROJECT_NAME_COLOR_H
#define PROJECT_NAME_COLOR_H


struct Color {
    int red, green, blue, alpha;

    Color();
    Color(int red, int green, int blue);

    void changeOpacity(int alpha);
};


#endif //PROJECT_NAME_COLOR_H
