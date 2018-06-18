//
// Created by Stephen O Brien on 17/06/2018.
//

#include "HawaiianPizza.h"

HawaiianPizza::HawaiianPizza(int sizeOfPizza) {        //type of Pizza
    name = "Hawaiian Pizza";
    dough = "Thin";
    sauce = "Hawaiian";
    toppings.push_back("Pineapple");
    toppings.push_back("Ham");
    size = sizeOfPizza;
}
void HawaiianPizza::prepare() {     //Not used at moment


}

