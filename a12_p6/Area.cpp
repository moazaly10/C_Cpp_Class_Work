#include <iostream>
#include "Area.h"

Area::Area(const char* n) : color(n) {
    std::cout << "Area constructed\n";
}

Area::~Area() {
    std::cout << "Area destructed\n";
}

const char* Area::getColor() const {
    return color;
}
