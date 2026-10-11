/*
CH-230-A
a12_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

string colors[] = {"RED", "BLACK", "VIOLET", "BLUE"};

int main() {

    srand(time(NULL));

    Area* list[25];

    for (int i = 0; i < 25; i++) {
        int type = rand() % 4;
        string c = colors[rand() % 4];
        int s1 = 5 + rand() % 96;
        int s2 = 5 + rand() % 96;

        if (type == 0)
            list[i] = new Circle(c.c_str(), s1);
        else if (type == 1)
            list[i] = new Ring(c.c_str(), s1, s2);
        else if (type == 2)
            list[i] = new Rectangle(c.c_str(), s1, s2);
        else
            list[i] = new Square(c.c_str(), s1);
    }

    double totalA = 0, totalP = 0;

    for (int i = 0; i < 25; i++) {

        cout << "\n" << list[i]->getColor() << " object:\n";

        double A = list[i]->calcArea();
        double P = list[i]->calcPerimeter();

        cout << "  Area = " << A << endl;
        cout << "  Perimeter = " << P << endl;

        totalA += A;
        totalP += P;
    }

    cout << "\n------ TOTALS ------\n";
    cout << "Total area = " << totalA << endl;
    cout << "Total perimeter = " << totalP << endl;

    for (int i = 0; i < 25; i++)
        delete list[i];

    return 0;
}
