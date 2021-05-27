#include "Triangle.h"

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) : point1(std::make_pair(x1, y1)),
                                                                                 point2(std::make_pair(x2, y2)),
                                                                                 point3(std::make_pair(x3, y3)) {}

float Triangle::Area()  {
    return std::abs(
            point1.first * (point2.second - point3.second) + point2.first * (point3.second - point1.second) +
            point3.first * (point1.second - point2.second)) / 2;
}
