#include <iostream>
#include "Pizza.h"
#include "HawaiianPizza.h"
#include "PizzaShop.h"
#include "DominosPizza.h"
using namespace std;


int main() {



 PizzaShop* dominos = new DominosPizza();       //creates a pizza shop with the ability to use factory inside

    Pizza* pizza = dominos->makePizza("Hawaiian");  //pizza pointer is returned from the pizzashops internal factory
                                                    //that makes the pizza based on the type.

    pizza = dominos->makePizza("Pepperoni");




    cout<<"Name is " <<pizza->getName()<<endl;                   // just an example of the attributes, made public for demonstration.











    return 0;
}