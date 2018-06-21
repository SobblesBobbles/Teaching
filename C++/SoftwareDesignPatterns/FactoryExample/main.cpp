#include <iostream>
#include "Pizza.h"
#include "HawaiianPizza.h"
#include "PizzaShop.h"
#include "DominosPizza.h"
#include "Ticket.h"
using namespace std;


int main() {

    Ticket* t = new Ticket("Hawaiian",10);


 PizzaShop* dominos = new DominosPizza();       //creates a pizza shop with the ability to use factory inside

    Pizza* pizza = dominos->makePizza(t);  //pizza pointer is returned from the pizzashops internal factory
                                                    //that makes the pizza based on the type.


    Ticket* t2 = new Ticket("Pepperoni",12);

    Pizza* nextPizza = dominos->makePizza(t2);


    delete pizza;
    delete t;
    delete t2;

















    return 0;
}