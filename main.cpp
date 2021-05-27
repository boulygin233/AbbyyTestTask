#include <iostream>
#include <string>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using std::cin;
using std::cout;

int main() {
    cout << "Hello, I am your Shape Area Calculator.\n";

    AbstractShape *shape;

    bool is_working = true;

    while (is_working) {
        cout << "Please, input type of shape, which area you want to find:\n";
        cout << "(currently only \"triangle\", \"circle\" and \"rectangle\" are supported "
                "or you can type \"stop\" to stop me)\n";
        std::string command;
        cin >> command;
        if (command == "triangle") {
            cout << "It is triangle, please, input three pairs of coordinates in order *x1, y1, x2, y2, x3, y3*:\n";
            float x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            shape = new Triangle(x1, y1, x2, y2, x3, y3);
            cout << "Area of your triangle is equal " << shape->Area() << "\n########################################"
                                                                          "#########################################\n";
        } else if (command == "rectangle") {
            cout << "It is rectangle, please, input four pairs of coordinates "
                    "in order *x1, y1, x2, y2, x3, y3, x4, y4*:\n";
            float x1, y1, x2, y2, x3, y3, x4, y4;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
            shape = new Rectangle(x1, y1, x2, y2, x3, y3, x4, y4);
            cout << "Area of your rectangle is equal " << shape->Area() << "\n########################################"
                                                                           "#########################################\n";
        } else if (command == "circle") {
            cout << "It is circle, please, input pairs of center and radius in order *x, y, radius*:\n";
            float x, y, radius;
            cin >> x >> y >> radius;
            shape = new Circle(x, y, radius);
            cout << "Area of your circle is equal " << shape->Area() << "\n########################################"
                                                                        "#########################################\n";
        } else if (command == "stop") {
            is_working = false;
            cout << "Bye";
        } else {
            cout << "Sorry, I don't understand you, try again:\n";
        }
    }
}
