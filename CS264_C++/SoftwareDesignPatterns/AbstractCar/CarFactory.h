//
// Created by Stephen O Brien on 19/06/2018.
//

#ifndef ABSTRACTCAR_CARFACTORY_H
#define ABSTRACTCAR_CARFACTORY_H
#include "Car.h"


class CarFactory {




public:
    string name;
   virtual Car* MakeCar(string name, string wheels);  //to-be-overridden
    CarFactory();               //constructor
    ~CarFactory();




};


#endif //ABSTRACTCAR_CARFACTORY_H
