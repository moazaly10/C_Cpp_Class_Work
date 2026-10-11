/*
CH-230-A
a12_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "Shapes.h"
using namespace std;

int main() {
    Hexagon blueHex("blue", 9);
    Hexagon greenHex("green", 15);
    Hexagon copyHex(greenHex);

    cout << "Blue Hexagon:\n";
    cout << "Side: " << blueHex.getSide() << "\n";
    cout << "Perimeter: " << blueHex.perimeter() << "\n";
    cout << "Area: " << blueHex.area() << "\n\n";

    cout << "Green Hexagon:\n";
    cout << "Side: " << greenHex.getSide() << "\n";
    cout << "Perimeter: " << greenHex.perimeter() << "\n";
    cout << "Area: " << greenHex.area() << "\n\n";

    cout << "Copied Hexagon (copy of green):\n";
    cout << "Side: " << copyHex.getSide() << "\n";
    cout << "Perimeter: " << copyHex.perimeter() << "\n";
    cout << "Area: " << copyHex.area() << "\n";

    return 0;
}
