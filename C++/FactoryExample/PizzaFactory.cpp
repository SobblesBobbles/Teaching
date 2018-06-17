//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PizzaFactory.h"
#include "HawaiianPizza.h"
#include "PepperoniPizza.h"




Pizza* PizzaFactory::createPizza(string type) {


    Pizza *pizza;               //pizza pointer

    if (type == "Hawaiian") {

        pizza = new HawaiianPizza();        //this class actually creates the pizza
                        // prepares it
    }
    else if (type== "Pepperoni"){
        pizza = new PepperoniPizza();

    }
    pizza->prepare();
    return pizza;
}
