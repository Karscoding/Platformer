//
// Created by Shadow on 11/24/2023.
//

#ifndef PROJECT_NAME_LEVEL_H
#define PROJECT_NAME_LEVEL_H

#include "ground.h"
#include <list>

class Level {
public:
    Player* player;
    std::list<Object*> objectList;

    void addObject(Object* object);

    std::list<Object*>* getObjects();
    Player* getPlayer();
};


#endif //PROJECT_NAME_LEVEL_H
