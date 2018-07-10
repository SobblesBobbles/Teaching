/*
 * Create a dynamically altering array of doubles, when -1 is entered, print all the numbers in the dynamically
 * updating array you've created.
 */
#include <iostream>

using namespace std;




int main() {

    int size = 3;           // initial size
    int newSize = 0;            // new size
    double* numbers = new double [size];          //dynamic array

    int nItems=0;               //counts the items

    double temp = 0;               //temp numbers
    int i = 0;              //iterator

    cin>>temp;              //cin

    while(temp!=-1){            //while its not -1


        if (i>=size){           //if the size is an issue

            cout<<"threshold met"<<endl;
            cout<<"i is "<<i<<endl;
            cout<<"size is "<<size<<endl;

            double* newArray= new double [size];            //makes new array to store results

            for (int j = 0; j<size; j++){       //assigns
                newArray[j] = numbers[j];
                nItems=size;
            }

            newSize = size*2;               //redefines the size

            numbers[newSize];                       //reassigns the size of the array

            for (int j = 0; j<size; j++){           //puts in the old data
                numbers[j] = newArray[j];
            }

            delete [] newArray;

            size = newSize;                             //redefines size

            cout<<"New size is "<<size<<endl;


            numbers[i] = temp;                  //puts in the latest number after reconfiguration

            for(int j = 0; j<nItems; j++){                  //prints out the ray
                cout<<numbers[j]<<endl;
            }

        }

        else {
            numbers[i] = temp;              //if there are no problems
            nItems++;
        }




        i++;                                // increment

        cin>>temp;
    }


    for (int j = 0; j<nItems; j++){         //when its finished (-1)
        cout<<numbers[j]<<endl;
    }


    delete  [] numbers;



    return 0;
}



