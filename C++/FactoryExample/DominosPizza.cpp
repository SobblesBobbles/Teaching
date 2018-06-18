//
// Created by Stephen O Brien on 17/06/2018.
//

#include "DominosPizza.h"
#include "HawaiianPizza.h"
#include "Ticket.h"

DominosPizza::DominosPizza(){ //default constructor

}




Pizza* DominosPizza::makePizza(Ticket* t){ // dominos has the ability to make pizza

    Pizza* pizza;//pointer object to pizza to be returned

    ticket = t;
    Process(ticket);

    pizza = factory->createPizza(t->typeOfPizza,t->sizeOfPizza);

    return pizza;                                            //returned pizza pointer object

}

void DominosPizza::Process(Ticket* t){
    cout<<"************"<<endl;
    cout<<"Welcome to Dominos"<<endl;                       // specific output based on the type of pizza shop
    cout<<"Processing Data . . ."<<endl;
    cout<<"The order number is "<<ticket->orderNumber<<endl;


}
