//
// Created by Stephen O Brien on 16/07/2018.
//

#ifndef LAB7_2_DOG_H
#define LAB7_2_DOG_H

#include <iostream>
using namespace std;

class Dog {

private:
    string breed;
    bool isDangerous;
    int age;

public:
    Dog(string breed1, bool isDangerous1, int age1);
    string getBreed();
    bool getIsDangerous();
    int getAge();
    void setAge(int);
    void setBreed(string);
    void setIsDangerous(bool);

    void bark();

};


#endif //LAB7_2_DOG_H
