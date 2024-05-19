#include "Triangle.h"
#include <GL/glut.h>

Triangle::Triangle(float x, float y, double b, double h) : x(x), y(y), base(b), height(h) {}

void Triangle::draw() {
    glBegin(GL_TRIANGLES);
    glVertex2f(x, y);
    glVertex2f(x + base, y);
    glVertex2f(x + base / 2, y + height);
    glEnd();
}
