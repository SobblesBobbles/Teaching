//
//  Header.h
//  PolyMorph
//
//  Created by Stephen O Brien on 20/11/2017.
//  Copyright © 2017 Stephen O Brien. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <cstring>

using namespace std;

class Human {
  
public:
    int age;
    string name;
public:
    Human();
    Human(string, int);
    
    Human operator+(Human);
    
    int getAge(Human);
    
};





#endif /* Header_h */
