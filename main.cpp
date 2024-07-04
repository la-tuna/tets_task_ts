#include "UserInteraction.h"
#include "Renderer.h"
#include <vector>

int main(int argc, char** argv) {
    system("chcp 1251");

    std::vector<Shape*> shapes;
    UserInteraction::getUserInput(shapes);

    Renderer renderer(shapes);
    renderer.run(argc, argv);

    return 0;
}
