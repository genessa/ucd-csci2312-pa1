//
// Created by Genessa Moodie on 2/5/16.
//

#include <iostream>
#include <cmath>
#include "Point.h"

Point::Point(double newX, double newY, double newZ)
{
    x = newX;
    y = newY;
    z = newZ;
}

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}


double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

const double Point::distanceTo(const Point &pointA, const Point& pointB) {
    double distance;
    distance = sqrt( pow((pointB.x-pointA.x),2.0) + pow((pointB.y-pointA.y),2.0) + pow((pointB.z-pointA.z),2.0) );
    return distance;

}

Point::~Point() {
    std::cout << "Destructor called." << std::endl;
}