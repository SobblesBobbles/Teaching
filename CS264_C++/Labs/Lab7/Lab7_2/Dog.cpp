//
// Created by Stephen O Brien on 16/07/2018.
//

#include "Dog.h"

Dog::Dog(string breed1, bool isDangerous1, int age1) {
    breed = breed1;
    isDangerous = isDangerous1;
    age = age1;
}

string Dog::getBreed(){
    return breed;
}
bool Dog::getIsDangerous() {
    return isDangerous;
}
int Dog::getAge() {
    return age;
}

void Dog::setAge(int a) {
    age =a;
}
void Dog::setBreed(string b) {
    breed = b;
}
void Dog::setIsDangerous(bool i) {
    isDangerous = i;
}

void Dog::bark(){
    cout<<"Woof"<<endl;
}