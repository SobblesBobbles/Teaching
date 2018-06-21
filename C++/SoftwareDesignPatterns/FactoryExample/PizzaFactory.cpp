//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PizzaFactory.h"
#include "HawaiianPizza.h"
#include "PepperoniPizza.h"




Pizza* PizzaFactory::createPizza(string type, int size) {

    cout<<"Enters the factory"<<"Type = "<<type<<endl;
    cout<<"Customer wants a size of "<<size<<" inches."<<endl;
    Pizza *pizza;               //pizza pointer

    if (type == "Hawaiian") {
        cout<<"Customer has asked for a Hawaiian Pizza"<<endl;
        pizza = new (nothrow) HawaiianPizza(size);        //this class actually creates the pizza

    }
    else if (type== "Pepperoni"){
        pizza = new (nothrow) PepperoniPizza(size); //only make it if space is available. otherwise sets to null


    }
    pizza->prepare();               // prepares it


    return pizza;

}


