#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "Shape.h"

class Renderer {
private:
    std::vector<Shape*>& shapes;

public:
    Renderer(std::vector<Shape*>& shapes);
    static Renderer* instance;

    void initOpenGL();
    static void display();
    static void displayWrapper();
    void run(int argc, char** argv);
};

#endif
