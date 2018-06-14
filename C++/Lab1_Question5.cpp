/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */


/*
 * Question: An integer is said to be prime if it is divisible only by the two distinct 
 * factors of 1 and itself. Write a function that determines if a number is prime. Use
 * this function in a program that determines and prints all the prime numbers between 
 * 1 and 5000.
 */

 #include <iostream>
 #include <math.h>
 using namespace std;


 int main (){

 	bool array [50];

 	int num = 50;

for (int i = 0; i<num; i++){
	array[i]= false;
}


for (int i = 2; i<num; i++){

	for (int j = 2; j<i;j++){

		if (i%j==0){
			array[i] = true;
			
		
		}
	}
}

for (int i = 2; i<num; i++){
	if(array[i]==false){
		cout<<i<<endl;
	}
}



 	return 0;
 }  