//
// Created by Shadow on 11/24/2023.
//

#include "level1.h"
#include "player.h"

Level1::Level1() {
    Color white = Color(255, 255, 255);

    addObject(new Player());
    addObject(new Ground(Vector2(300, 400), Vector2(600, 200), white));
    addObject(new Ground(Vector2(1050, 550), Vector2(150, 100), white));
}