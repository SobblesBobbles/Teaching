//
// Created by Stephen O Brien on 17/06/2018.
//

#include "Ticket.h"

Ticket::Ticket(string type,int size){

    orderNumber+=1;
    typeOfPizza = type;
    sizeOfPizza = size;

}

int Ticket::getNumOfTickets() {
    return orderNumber;
}
int Ticket::orderNumber=0;

