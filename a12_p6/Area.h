#ifndef AREA_H
#define AREA_H

class Area {
public:
    Area(const char* n);
    virtual ~Area();

    const char* getColor() const;

    virtual double calcArea() const = 0;        // pure virtual
    virtual double calcPerimeter() const = 0;   // pure virtual

protected:
    const char* color;
};

#endif
