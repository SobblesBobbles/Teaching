#include <iostream>

#include "Person.h"    // we include the header of the class we have defined.

using namespace std;


int main() {

    Person p = Person();            //creating a person object.

    p.setName("Stephen");               // setting the name

    cout<<p.getName()<<" age is "<<p.getAge()<<endl;     //how we access the private variables

    p.setAge(25);                                       // set the age

    cout<<p.getName()<<" age is "<<p.getAge()<<endl;


    return 0;
}