//
// Created by Genessa Moodie on 2/5/16.
//

#include <iostream>
#include "Point.h"

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

Point::~Point() {
    std::cout << "Destructor called." << std::endl;
}