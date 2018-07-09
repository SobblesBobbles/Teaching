/*
 * Write  a  program  which  allows  the  user to  input  a sequence
 * of  doubles and  then  prints  that  sequence  in reverse.
 * The  length  of  the  sequence  should  be specified by
 * the  user  at  run-time.  Hence,  initially  the program
 * should ask the user to input howmany numbers the sequence will contain.
 */


#include <iostream>

using namespace std;

int main() {

    cout<<"Specify size of array: "<<endl;
    int size;               //captures the size
    cin>>size;

    double array [size];            //array

    double temp;                    //storing the temp number

    for (int i = 0; i<size; i++){       // loop to iterate
        cin>>temp;                      // stores the  temp number
        array[i] = temp;                // assigns
    }

    for (int i = size-1; i>=0; i--){        //iterator
        cout<<array[i]<<endl;           //prints
    }

    return 0;
}