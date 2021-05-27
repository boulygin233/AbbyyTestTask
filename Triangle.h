#ifndef ABBYYTESTTASK_TRIANGLE_H
#define ABBYYTESTTASK_TRIANGLE_H

#include "abstract_shape.h"
#include <utility>
#include <cmath>

using std::pair;

class Triangle : public AbstractShape {
    pair<float, float> point1;
    pair<float, float> point2;
    pair<float, float> point3;

public:
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3);

    float Area() override;
};

#endif //ABBYYTESTTASK_TRIANGLE_H