//
// Created by Stephen O Brien on 21/06/2018.
//

#ifndef HEADERS_CLASSES_PERSON_H                    //if not defined
#define HEADERS_CLASSES_PERSON_H                    // then define
#include <iostream>


/*
 * When we have a header file, we use it to declare all the methods, variables and access identifiers
 */
class Person {
private:                                     //otherwise its treated as private
    int age;
    std::string name;

public:
    Person();                               // defining the constructor



    void setName(std::string nameSpecified);             //defining getters and setters
    std::string getName();

    void setAge(int ageSpecified);                       //defining getters and setters
    int getAge();






};


#endif //HEADERS_CLASSES_PERSON_H
