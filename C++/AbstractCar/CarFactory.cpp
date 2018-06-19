//
// Created by Stephen O Brien on 19/06/2018.
//

#include "CarFactory.h"
#include "Car.h"
#include "BMW.h"
#include "BMWFactory.h"

CarFactory::CarFactory(){

}


Car* CarFactory::MakeCar(string name, string wheels) {

//    Car* car;
//
//       if (factory->name == "BMW Factory"){
//           BMWFactory* fact = new BMWFactory();
//
//            car = fact->MakeCar( "BMW", wheels);
//        }
//
//    return car;
}

CarFactory::~CarFactory() {}
