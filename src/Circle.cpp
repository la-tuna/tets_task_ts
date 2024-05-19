#include "Circle.h"
#include <GL/glut.h>
#include <cmath>

#define M_PI 3.14

Circle::Circle(float x, float y, double r) : x(x), y(y), radius(r) {}

void Circle::draw() {
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 360; i++) {
        double angle = 2 * M_PI * i / 360;
        double x_i = x + radius * cos(angle);
        double y_i = y + radius * sin(angle);
        glVertex2f(x_i, y_i);
    }
    glEnd();
}
