//
// Created by Stephen O Brien on 17/06/2018.
//

#ifndef FACTORYEXAMPLE_PIZZA_H
#define FACTORYEXAMPLE_PIZZA_H

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

 class Pizza {

public:
    void prepare();

    void setName(string name);
     string getName();

 protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;

};


#endif //FACTORYEXAMPLE_PIZZA_H
