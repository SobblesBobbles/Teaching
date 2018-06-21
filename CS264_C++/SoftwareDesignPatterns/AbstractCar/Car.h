//
// Created by Stephen O Brien on 19/06/2018.
//

#ifndef ABSTRACTCAR_CAR_H
#define ABSTRACTCAR_CAR_H
#include <iostream>
#include "Wheels.h"

using namespace std;


class Car {
public:
    Car();    //constructor
   ~Car();    //destructor

public:
    Wheels* wheels;  //has a set of abstract wheels
    string name;    // has a name
void setWheels(Wheels* theWheels);  //set wheels
};


#endif //ABSTRACTCAR_CAR_H
