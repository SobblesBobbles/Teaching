//
// Created by Stephen O Brien on 17/06/2018.
//

#ifndef FACTORYEXAMPLE_TICKET_H
#define FACTORYEXAMPLE_TICKET_H
#include <iostream>
using namespace std;




class Ticket {

public:
    Ticket(string type);

    string typeOfPizza;
   static int orderNumber;

    int getNumOfTickets();

};


#endif //FACTORYEXAMPLE_TICKET_H
