//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PizzaShop.h"
#include "Ticket.h"

#include "HawaiianPizza.h"
#include "PizzaFactory.h"

PizzaShop::PizzaShop(){

}



Pizza* PizzaShop::makePizza(Ticket* t){

    string type = t->typeOfPizza;
    Pizza* pizza;
    cout<<"The order number is "<<t->orderNumber<<endl;

    pizza = factory->createPizza(type);


    return pizza;

}
