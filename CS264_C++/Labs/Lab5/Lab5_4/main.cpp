#include <iostream>

using namespace std;

struct person {     // struct
    string name;        //variables
    int age;
    person* mate;       // pointer to next person
};

void print_people (person &first) {


    person* temp;
    temp = &first;      // connecting up the iterator

    while(temp!=NULL){      // while theres an object

        cout<<temp->name<<" "<<endl;    //print name

        temp = temp->mate;


    }


}

void add_Person (person first,string name,int age){

    person* temp;
    temp = &first;      // connecting up the iterator



    while(temp->mate!=NULL){      // while theres an object

        cout<<" going through =>"<<temp->name<<endl;
        temp = temp->mate;


    }
    person* personNew = new person();   //making a new person to add
    temp->mate =personNew;              //connecting
    personNew->name= name;              //assignment
    personNew->age = age;               //assignment



}

int currentLength(person first) {

    person* temp;
    temp = &first;      // connecting up the iterator

int counter = 0;

    while(temp!=NULL){      // while theres an object

        counter++;
        temp = temp->mate;


    }

    return counter;

}

  int  main()
 {


    person p1 =  person();      // person1
    p1.name = "Stephen";
    p1.age = 27;

    person p2 = person();      //person2
    p2.name = "Harry";
    p2.age = 21;

    person p3 =  person();      //person3
    p3.name = "Jimmy";
    p3.age = 37;


    p1.mate = &p2;      //connecting the objectd
    p2.mate = &p3;




print_people(p1);
     cout<< " ****"<<endl;


     add_Person(p1,"Niall",100);

     
     print_people(p1);

     cout<<currentLength(p1);




    return 0;
}