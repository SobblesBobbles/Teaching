#include <iostream>

using namespace std;

struct person {             //struct (public by default)
    string name;
    int age;
};
int main() {

    int size;
    cin>>size;
    person arrayOfPeople [size];        // array of structs

    string nameSaver;                   // temp variables
    int    ageSaver;                    // temp variables

    for (int i = 0; i<size; i++){           // loop

        cout<<"Enter name."<<endl;
        cin>>nameSaver;                          // input name
        arrayOfPeople[i].name = nameSaver;      // assigning to the struct
        cout<<"Enter age."<<endl;
        cin>>ageSaver;
        arrayOfPeople[i].age = ageSaver;        // assigning to the struct

        cout<<" Person "<<arrayOfPeople[i].name<<" with age of "<<arrayOfPeople[i].age<<" saved. :)"<<endl;
    }


    for (int i = 0; i< size; i++){      // interator

        cout<<arrayOfPeople[i].name <<", ";
        cout<<arrayOfPeople[i].age << " ";
        cout<<endl;
    }



    return 0;
}