//
// Created by Stephen O Brien on 19/06/2018.
//

#ifndef ABSTRACTCAR_BMWFACTORY_H
#define ABSTRACTCAR_BMWFACTORY_H


#include "Car.h"
#include "CarFactory.h"


class BMWFactory : public CarFactory {


public:
    string name;
    BMWFactory();                                    //constructor
    ~BMWFactory();                                   //destructor
  virtual  Car* MakeCar(string name, string wheels); //overridden method

};


#endif //ABSTRACTCAR_BMWFACTORY_H
