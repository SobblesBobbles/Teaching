/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */

/*
 * Write a program that simulates the rolling of two dice. The program should call rand 
 * to roll the first die, and call rand again to roll the second die. The sum of two 
 * values should then be calculated. Your program should roll the pair of dice a user
 * specified number of times, keeping track of the number of times each possible value 
 * occurs. 
 */



#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
void roll(int &d){
	d = rand() % 6 + 1;
}

int main() {
    srand(time(NULL));
    int r1, r2, rolls, total;
    cout << "How many times would you like the dice to roll?" << endl;
    cin >> rolls;
    cout <<"\nYou have selected " << rolls << " rolls of the 2 die, okay." << endl;
    double freq[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i =0; i<rolls;i++){
	roll(r1);
	roll(r2);
	total = r1+r2;
	freq[total-2]++; 	
    }
    for(int i =1; i< 12;i++){
	cout << i+1 << ":" << (freq[i]/rolls)*100 << "%" << endl;
    }

	
}