#include <iostream>
#include "Circle.h"

Circle::Circle(float x, float y, float r): center(std::make_pair(x, y)), radius(r) {}

float Circle::Area()  {
    return radius * radius * M_PI;
}
