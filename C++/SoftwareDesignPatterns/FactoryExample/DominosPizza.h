//
// Created by Stephen O Brien on 17/06/2018.
//

#ifndef FACTORYEXAMPLE_DOMINOSPIZZA_H
#define FACTORYEXAMPLE_DOMINOSPIZZA_H

#include "PizzaShop.h"      //includes the inheritence class

class DominosPizza : public PizzaShop{

public:
    DominosPizza();         //default constructor
    virtual Pizza* makePizza(Ticket* t) override;     //overridden makePizza method which returns a pointer Pizza
    ~DominosPizza();
    void Process(Ticket* t);

    Ticket* t;


};


#endif //FACTORYEXAMPLE_DOMINOSPIZZA_H
