//
//  circle_functions.cpp
//  PolyMorph
//
//  Created by Stephen O Brien on 20/11/2017.
//  Copyright © 2017 Stephen O Brien. All rights reserved.
//


#include "Header.h"
#include <iostream>

using namespace std;


Human::Human(){     //constructor
    name = "void";
    age = 0;
}

Human::Human(string name1 , int age1){      //constructor with parameters. 
    name = name1;
    age = age1;
}

Human Human ::operator+(Human h, Human i) {      //operator overloading, adding human objects and returning the new human. 
    
    Human temp;
    temp.age = h.age+i.age;
    temp.name = h.name+i.name;
    

    
    
    
    
    return temp;
}

int Human::getAge (Human h){        //getter
    return h.age;
}



