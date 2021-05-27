#ifndef ABBYYTESTTASK_CIRCLE_H
#define ABBYYTESTTASK_CIRCLE_H


#include "abstract_shape.h"
#include <utility>
#include <cmath>

using std::pair;

class Circle : public AbstractShape {
    pair<float, float> center;
    float radius;

public:
    Circle(float x, float y, float r);

    float Area() override;
};


#endif //ABBYYTESTTASK_CIRCLE_H
