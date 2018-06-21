//
// Created by Stephen O Brien on 21/06/2018.
//

#include "Person.h"

/*
 * This cpp file includes the header file that we just defined. Here is where we define what happens in our methods.
 */



Person::Person(){                           // This scope accesses the Person class, followed by the method.
                                            // class :: method ()
    age = 0;
    name = "Default";

}

void Person::setName(std::string nameSpecified) {
    name = nameSpecified;
}

std::string Person::getName() {
    return name;
}
void Person::setAge(int ageSpecified) {
    age = ageSpecified;
}

int Person::getAge() {
    return age;
}

