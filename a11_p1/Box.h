/*
CH-230-A
a11_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Box.h
#ifndef BOX_H
#define BOX_H

class Box {
private:
    double height;
    double width;
    double depth;

public:
    Box();                                  // default
    Box(double h, double w, double d);      // param
    Box(const Box& other);                  // copy
    ~Box();                                 // destructor

    void setHeight(double h);
    void setWidth(double w);
    void setDepth(double d);

    double getHeight() const;
    double getWidth() const;
    double getDepth() const;

    double volume() const;
};

#endif
