//
// Created by Stephen O Brien on 18/06/2018.
//

#ifndef FACTORYEXAMPLE_FOURSTARPIZZA_H
#define FACTORYEXAMPLE_FOURSTARPIZZA_H

#include "PizzaFactory.h"
#include "PizzaShop.h"


class FourStarPizza : public PizzaShop {

public:
    FourStarPizza();
   virtual Pizza* makePizza(Ticket* t);

};


#endif //FACTORYEXAMPLE_FOURSTARPIZZA_H
