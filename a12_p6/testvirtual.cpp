/*
CH-230-A
a12_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

// ASCII DIAGRAM OF RELATIONS
//
//          +----------------+
//          |    Area        |
//          +----------------+
//                  ^
//                  |
//          +----------------+
//          |   Circle       |
//          +----------------+
//                  ^
//                  |
//          +----------------+
//          |     Ring       |
//          +----------------+
//
//          +----------------+
//          |  Rectangle     |
//          +----------------+
//                  ^
//                  |
//          +----------------+
//          |    Square      |
//          +----------------+

int main() {

    // create objects (polymorphism demonstration)
    Area *list[7];

    list[0] = new Ring("BLUE", 5, 2);
    list[1] = new Circle("YELLOW", 7);
    list[2] = new Rectangle("GREEN", 5, 6);
    list[3] = new Circle("RED", 8);
    list[4] = new Rectangle("BLACK", 10, 20);
    list[5] = new Ring("VIOLET", 100, 5);
    list[6] = new Square("ORANGE", 12);     // required square object

    // compute total area + perimeter
    double totalArea = 0.0;
    double totalPerimeter = 0.0;

    cout << "\n----- Individual Areas and Perimeters -----\n";

    for (int i = 0; i < 7; i++) {

        // call virtual area function
        double a = list[i]->calcArea();

        // call virtual perimeter function
        double p = list[i]->calcPerimeter();

        cout << list[i]->getColor() << " shape:\n";
        cout << "  Area = " << a << "\n";
        cout << "  Perimeter = " << p << "\n\n";

        totalArea += a;
        totalPerimeter += p;
    }

    cout << "\n----- TOTAL RESULTS -----\n";
    cout << "Total area of all objects = " << totalArea << "\n";
    cout << "Total perimeter of all objects = " << totalPerimeter << "\n";

    // delete all objects
    for (int i = 0; i < 7; i++) {
        delete list[i];
    }

    return 0;
}
