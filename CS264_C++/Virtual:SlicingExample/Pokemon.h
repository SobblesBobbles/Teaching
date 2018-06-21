//
// Created by Stephen O Brien on 19/06/2018.
//

#ifndef VIRTUALEXAMPLE_POKEMON_H
#define VIRTUALEXAMPLE_POKEMON_H

#include <iostream>
using namespace std;


class Pokemon {
public:
    Pokemon();


    virtual void Eat();

protected:
    string type;
    string name;



};


#endif //VIRTUALEXAMPLE_POKEMON_H
