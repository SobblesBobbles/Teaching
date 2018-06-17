//
// Created by Stephen O Brien on 17/06/2018.
//

#include "DominosPizza.h"
#include "HawaiianPizza.h"
#include "Ticket.h"

DominosPizza::DominosPizza(){ //default constructor

}




Pizza* DominosPizza::makePizza(Ticket* t){ // dominos has the ability to make pizza

    string type = t->typeOfPizza;
    Pizza* pizza;                                             //pointer object to pizza to be returned

    cout<<"************"<<endl;
    cout<<"Welcome to Dominos"<<endl;                       // specific output based on the type of pizza shop

    cout<<"The order number is "<<t->orderNumber<<endl;

    pizza = factory->createPizza(type);                     // the pointer pizza is equal to the factory objects create pizza method
    pizza->setName("Dominos");                              // the type is inputted and the preparation happens there

    return pizza;                                            //returned pizza pointer object

}

