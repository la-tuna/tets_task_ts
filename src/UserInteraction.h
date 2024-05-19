#ifndef USERINTERACTION_H
#define USERINTERACTION_H

#include <vector>
#include "Shape.h"

class UserInteraction {
public:
    UserInteraction();
    static void getUserInput(std::vector<Shape*>& shapes);
};

#endif
