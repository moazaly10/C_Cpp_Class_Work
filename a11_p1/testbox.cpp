/*
CH-230-A
a11_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testbox.cpp
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    int n;
    cout << "Enter number of boxes: ";
    cin >> n;

    Box* boxes = new Box[2 * n];

    for (int i = 0; i < n; i++) {
        double h, w, d;
        cout << "Enter height, width, depth for box " << i + 1 << ": ";
        cin >> h >> w >> d;
        boxes[i] = Box(h, w, d);
    }

    for (int i = 0; i < n; i++)
        boxes[n + i] = boxes[i];  // copy constructor

    cout << "\nVolumes of all boxes:\n";
    for (int i = 0; i < 2 * n; i++)
        cout << "Box " << i + 1 << ": " << boxes[i].volume() << endl;

    delete[] boxes;
    return 0;
}
