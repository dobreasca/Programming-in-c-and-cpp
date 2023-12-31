#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"
class Square : public Rectangle
{
    private:
        double side;
    public:
        Square(const char *n, double nside);
		~Square();
		double calcArea() const;
        double calcPerimeter() const;
};

#endif