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

    ticket = t;


    Pizza* pizza;

    Process(ticket);
    pizza = factory->createPizza(t->typeOfPizza,t->sizeOfPizza);






    return pizza;

}
void PizzaShop::Process(Ticket* t){
    cout<<"Processing Data"<<endl;
    cout<<"The order number is "<<ticket->orderNumber<<endl;


}

