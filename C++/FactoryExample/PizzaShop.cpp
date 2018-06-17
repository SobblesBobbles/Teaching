//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PizzaShop.h"

#include "HawaiianPizza.h"
#include "PizzaFactory.h"

PizzaShop::PizzaShop(){

}


Pizza* PizzaShop::makePizza(string type){

    Pizza* pizza;

pizza = factory->createPizza(type);


    return pizza;

}
