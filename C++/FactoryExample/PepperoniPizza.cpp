//
// Created by Stephen O Brien on 17/06/2018.
//

#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza(int sizeOfPizza) {        //type of Pizza
    name = "Pepperoni Pizza";
    dough = "Thick";
    sauce = "BBQ";
    toppings.push_back("Pepperoni");
    size = sizeOfPizza;

}
void PepperoniPizza::prepare() {     //Not used at moment


}
