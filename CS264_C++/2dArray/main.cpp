#include <iostream>
using namespace std;

//sorting a two dimensional array

void print (int array [4] [4]){

    for (int i = 0; i<4; i++){

        for (int j = 0; j<4; j++){

            cout<< array[i][j]<<"  ";
        }
        cout<<endl;
    }

}

//just adds the number 1000 to each element of the array

void changeArray (int array [4] [4]){

    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){

            array[i][j]+=1000;
        }
        cout<<endl;
    }
}

// this sorts the two dimensional array using bubble sort, O(n)3

void sortArray (int array [4][4]){



    for (int m = 0; m<4; m++) {     // iterates through the outter dimension of the aerray
        for (int i = 0; i < 3; i++) {   // makes sure that the correct amount of swaps happen

            for (int j = 0; j < 3; j++) {   //iterates through the array

                if (array[m][j] > array[m][j + 1]) {    // comparison

                    int temp;   //switch

                    temp = array[m][j];
                    array[m][j] = array[m][j + 1];
                    array[m][j + 1] = temp;
                }


            }

        }
    }



}

int main() {



    int array [4] [4] = { {2,31,4,7}, {11,4,7,1},{15,4,23,3},{12,1,31,21}}; //declaration





    print(array);       //use of print function
    cout<<" "<<endl;

    sortArray(array);   // use of sorting function
    cout<<" "<<endl;
    print(array);       // use of print again






    return 0;
}


