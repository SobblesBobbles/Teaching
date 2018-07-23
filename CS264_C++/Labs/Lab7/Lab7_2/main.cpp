#include <iostream>
using namespace std;

#include "Dog.h"

int main() {

    Dog* d = new Dog("Terrier",true,2);

    cout<<"Type => "<<d->getBreed()<<endl;
    cout<<"Danger => "<<d->getIsDangerous()<<endl;
    cout<<"Age => "<<d->getAge()<<endl;

    cout<<"******"<<endl;
    cout<<endl;
    cout<<"Next dog:"<<endl;


    Dog* doggie = new Dog("Pitbull",true,5);

    cout<<"Type => "<<doggie->getBreed()<<endl;
    cout<<"Danger => "<<doggie->getIsDangerous()<<endl;
    cout<<"Age => "<<doggie->getAge()<<endl;



    return 0;
}