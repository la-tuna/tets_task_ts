#include "Renderer.h"
#include <GL/glut.h>

Renderer* Renderer::instance = nullptr;

Renderer::Renderer(std::vector<Shape*>& shapes) : shapes(shapes) {}

void Renderer::initOpenGL() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(0.1, 0.5, 0.1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}

void Renderer::display() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (Shape* shape : instance->shapes) {
        shape->draw();
    }

    glFlush();
}

void Renderer::displayWrapper() {
    instance->display();
}

void Renderer::run(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Shapes Drawing");

    initOpenGL();

    instance = this;
    glutDisplayFunc(displayWrapper);
    glutMainLoop();
}
