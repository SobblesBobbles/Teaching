//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PizzaFactory.h"
#include "HawaiianPizza.h"
#include "PepperoniPizza.h"




Pizza* PizzaFactory::createPizza(string type) {

    cout<<"Enters the factory"<<"Type = "<<type<<endl;
    Pizza *pizza;               //pizza pointer

    if (type == "Hawaiian") {
        cout<<"Customer has asked for a Hawaiian Pizza"<<endl;
        pizza = new HawaiianPizza();        //this class actually creates the pizza

    }
    else if (type== "Pepperoni"){
        pizza = new PepperoniPizza();


    }
    pizza->prepare();               // prepares it

    return pizza;
}
