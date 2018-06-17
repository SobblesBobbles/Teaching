//
// Created by Stephen O Brien on 17/06/2018.
//

#ifndef FACTORYEXAMPLE_PIZZAFACTORY_H
#define FACTORYEXAMPLE_PIZZAFACTORY_H
#include <iostream>
#include "Pizza.h"
using namespace std;



class PizzaFactory {

public:

    Pizza* createPizza(string type);
};


#endif //FACTORYEXAMPLE_PIZZAFACTORY_H
