#include <vector>
#include <string>
#include <iostream>


using namespace std;
#include <vector>

struct person {                                                                    //automatically set to public
    int age;
    string name;
    person* bestFriend;

};

class Group{
public:

    vector<person*> myGroup;                                // holds a group of structs


    bool GroupInput (vector<person*> p){
        myGroup = p;
    }

    void printGroupMembers(){                                                       //iterator

        for (vector<int>::size_type n = 0; n <myGroup.size(); n++ ){

            cout<<myGroup[n]->name<<endl;

        }

    }

};


int main() {


    person* charlie = new person();             //dynamic memory
    person* beth = new person();

    charlie->age = 20;
    charlie->name = "Charlie Ignam";

    beth->age = 19;
    beth->name = "Bethany Crimson";

    charlie->bestFriend = beth;

    beth->bestFriend = charlie;


    cout<<beth->bestFriend->name <<endl;



    vector<person*> mainGroup;                      //creating a vector of person structs
    mainGroup.push_back(charlie);                   // pushing onto the the vector
    mainGroup.push_back(beth);

    Group sendGroup = Group();                      //making the group that houses the vector
    sendGroup.GroupInput(mainGroup);                //sending the vector


    sendGroup.printGroupMembers();                  // printing the vector through an iterator






    delete charlie;                         // deleting the dynamic memory
    delete beth;







    return 0;
}