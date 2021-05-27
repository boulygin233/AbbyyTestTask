#include "Rectangle.h"

Rectangle::Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) :
        point1(std::make_pair(x1, y1)),
        point2(std::make_pair(x2, y2)),
        point3(std::make_pair(x3, y3)),
        point4(std::make_pair(x4, y4)) {}

float Rectangle::Area() {
    return std::abs(point1.first * (point2.second - point3.second) +
                    point2.first * (point3.second - point1.second) +
                    point3.first * (point1.second - point2.second)) / 2 +
           std::abs(point1.first * (point4.second - point3.second) +
                    point4.first * (point3.second - point1.second) +
                    point3.first * (point1.second - point4.second)) / 2;
}
