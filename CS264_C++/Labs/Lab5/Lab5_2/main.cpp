/*
 * Write a program that extends the functionality of
 * the above program such that it keeps reading the
 * sequence until it reads -1. That is, the program should
 * not initially ask for the length of the sequence.
 *
 */



#include <iostream>

using namespace std;
int main() {


double temp;
int sizeAtFirst = 5;
    int counter= 0;
double array[sizeAtFirst];  //initial initialisation

int i = 0;

    while (temp!=-1){       //checks for -1

        if(sizeAtFirst<=i){         // deals with the constant resizing
            array[sizeAtFirst*2];    // redeclares the size of the array

            sizeAtFirst *=2;            // saves this size
            array[i] = temp;            // assigns the value


        }
        else {
            array[i]= temp;         // if array isnt full
        }
        counter = i;        // counts the amount of assignments
        i++;                // counter

        cin>>temp;          //reassigns temp for while loop



    }


    for (int i = 0; i<counter; i++){        //simple visual output
        cout<<array[i]<<endl;
    }



    return 0;
}