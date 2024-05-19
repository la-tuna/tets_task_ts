#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    float x, y;
    double base, height;

public:
    Triangle(float x, float y, double b, double h);
    void draw() override;
};

#endif
