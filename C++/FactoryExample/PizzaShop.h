//
// Created by Stephen O Brien on 17/06/2018.
//

#ifndef FACTORYEXAMPLE_PIZZASHOP_H
#define FACTORYEXAMPLE_PIZZASHOP_H

#include "Pizza.h"
#include "PizzaFactory.h"
#include "Ticket.h"


class PizzaShop {
public:

    PizzaShop();


   virtual Pizza* makePizza(Ticket* t)=0;  //abstract makePizza, Pizzashop cannot be created as an object.


    PizzaFactory* factory;

};


#endif //FACTORYEXAMPLE_PIZZASHOP_H
