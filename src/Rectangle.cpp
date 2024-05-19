#include "Rectangle.h"
#include <GL/glut.h>

Rectangle::Rectangle(float x, float y, double w, double h) : x(x), y(y), width(w), height(h) {}

void Rectangle::draw() {
    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();
}
