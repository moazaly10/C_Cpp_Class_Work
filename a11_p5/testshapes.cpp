/*
CH-230-A
a11_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testshapes.cpp
#include "Shapes.h"

int main() {
    cout << "Creating Circle...\n";
    Circle c("MyCircle", 0, 0, 5);
    cout << "Circle area: " << c.area() << endl;
    cout << "Circle perimeter: " << c.perimeter() << endl;

    cout << "\nCreating Rectangle...\n";
    Rectangle r("MyRectangle", 0, 0, 4, 6);
    cout << "Rectangle area: " << r.area() << endl;
    cout << "Rectangle perimeter: " << r.perimeter() << endl;

    cout << "\nCreating Square...\n";
    Square s("MySquare", 0, 0, 4);
    cout << "Square area: " << s.area() << endl;
    cout << "Square perimeter: " << s.perimeter() << endl;

    cout << "\nDone.\n";
    return 0;
}
