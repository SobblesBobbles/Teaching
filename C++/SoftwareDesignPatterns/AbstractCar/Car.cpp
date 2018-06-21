//
// Created by Stephen O Brien on 19/06/2018.
//

#include "Car.h"



Car::Car() {
name = "Default";
    Wheels wheels;
}

void Car::setWheels(Wheels* theWheels){     //sets wheels
    wheels = theWheels;
}

Car::~Car(){}                               // destructor