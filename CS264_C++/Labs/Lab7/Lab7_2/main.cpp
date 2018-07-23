#include <iostream>
using namespace std;

#include "Dog.h"

int main() {

    //new dog object

    Dog* d = new Dog("Terrier",true,2);

    //printing out the attributes
    cout<<"Type => "<<d->getBreed()<<endl;
    cout<<"Danger => "<<d->getIsDangerous()<<endl;
    cout<<"Age => "<<d->getAge()<<endl;

    cout<<"******"<<endl;
    cout<<endl;
    cout<<"Next dog:"<<endl;


    // new dog object
    Dog* doggie = new Dog("Pitbull",true,5);

    // printing out the attributes
    cout<<"Type => "<<doggie->getBreed()<<endl;
    cout<<"Danger => "<<doggie->getIsDangerous()<<endl;
    cout<<"Age => "<<doggie->getAge()<<endl;



    return 0;
}