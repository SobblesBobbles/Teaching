//
// Created by Stephen O Brien on 18/06/2018.
//

#include "FourStarPizza.h"



Pizza* FourStarPizza::makePizza(Ticket* t){ // FourStar has the ability to make pizza


    Pizza* pizza;                                             //pointer object to pizza to be returned

    cout<<"************"<<endl;
    cout<<"Welcome to 4 Star"<<endl;                       // specific output based on the type of pizza shop

    cout<<"The order number is "<<t->orderNumber<<endl;

    pizza = factory->createPizza(t->typeOfPizza,t->sizeOfPizza);                     // the pointer pizza is equal to the factory objects create pizza method
    pizza->setName("FourStarPizza");                              // the type is inputted and the preparation happens there

    return pizza;                                            //returned pizza pointer object

}