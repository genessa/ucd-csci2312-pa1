//
// Created by Genessa Moodie on 2/5/16.
//
#include <cmath>
#include "Point.h"


double computeArea(const Point &a, const Point &b, const Point &c);

double computeArea(const Point&a, const Point &b, const Point &c)
{
    double area, s, sideA, sideB, sideC;

    // compute side distances
    sideA = Point::distanceTo(a,b);
    sideB = Point::distanceTo(b,c);
    sideC = Point::distanceTo(c,a);

    // use Heron's formula to compute area
    s = ((sideA + sideB + sideC)/2);

    area = sqrt( (s* (s-sideA)*(s-sideB)*(s-sideC) ) );

    return area;

}