#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
    float x, y;

public:
    Circle(float x, float y, double r);
    void draw() override;
};

#endif