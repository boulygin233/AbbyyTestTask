#ifndef ABBYYTESTTASK_RECTANGLE_H
#define ABBYYTESTTASK_RECTANGLE_H

#include "abstract_shape.h"
#include <utility>
#include <vector>
#include <cmath>

using std::vector;
using std::pair;

class Rectangle : public AbstractShape {
    pair<float, float> point1;
    pair<float, float> point2;
    pair<float, float> point3;
    pair<float, float> point4;

public:
    Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

    float Area() override;
};

#endif //ABBYYTESTTASK_RECTANGLE_H

