#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    float x, y;
    double width, height;

public:
    Rectangle(float x, float y, double w, double h);
    void draw() override;
};

#endif