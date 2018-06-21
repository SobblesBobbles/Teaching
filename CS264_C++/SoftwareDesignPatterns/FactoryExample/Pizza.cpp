//
// Created by Stephen O Brien on 17/06/2018.
//

#include "Pizza.h"
#include <vector>
#include <iostream>
using namespace std;

void Pizza::prepare() {


    cout<<"Preparing a "<<name<<endl;
    cout<<"The dough is put on "<<dough<<"."<<endl;
    cout<<"The sauce "<<sauce<<" is put on the "<<dough<< " dough."<<endl;
    cout<<"The size is "<<size<<"."<<endl;


    for (auto const i :toppings){
        cout << "Toppings ==> " << i << "\n";
    }
    cout<<"Preparation finished."<<endl;
    cout<<"**********"<<endl;


}


void Pizza::setName(string name){
    name = name;
}

string Pizza::getName(){
    return name;
}