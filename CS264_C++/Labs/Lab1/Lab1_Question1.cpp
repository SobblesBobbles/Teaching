/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */


#include <iostream>
using namespace std;

/*
 * Largest is a function that takes two integers (int a and int b), it then uses the ternary operator
 * to determine if A is bigger than B. If this is true, it returns A after the ? operator and returns B after the ?
 * if the condition is false.
 *
 */

int Largest(int a, int b){

   return a>b ? a:b; // ternary operator



}
/*
 * Smallest is a function that takes two integers (int a and int b), it then uses the ternary operator
 * to determine if A is smaller than B. If this is true, it returns A after the ? operator and returns B after the ?
 * if the condition is false.
 *
 */

int Smallest(int a,int b){
    return a<b? a: b;
}
/*
 * Sum is a function that takes in 3 parameters (int a, int b, int c) and finds the sum using the sum variable.
 * It then returns this figure back to the declaration of the method.
 */

 int Sum(int a , int b, int c){
    int sum = a+b+c;
    return sum;
}

/*
 * Average is a function that takes in 3 parameters (int a, int b, int c) and uses the Sum function to determine the
 * sum to which to divide against. As the question only tells us that there will be 3 integers, we can hard code this
 * number. (Not ideal practice though). It returns the average then.
 */
int Average(int a,int b, int c){

    int avg = Sum(a,b,c)/3; // making use of the Sum function.
    return avg;
}

int main() {


    //declaration of a, b and c variables.
    int a,b,c;

    cin>>a;cin>>b;cin>>c;   //takes in the values for the variables and assigns them.


    /*
     * Largest function is used twice here in a nested format, first of all Largest is used in the inner brackets
     * to determine the largest number between a and b. It then returns the number into the outer Largest function
     * which then determines the largest number between c and the largest number between a and b.
     */
    int largestNumber = Largest(c,Largest(a,b));
    /*
     * Smallest function is used twice again in the same format as the Largest function above. This creates less
     * clutter of code although it is more complex to read.
     */
    int smallestNumber = Smallest(c,Smallest(a,b));


    /*
     * 'sum' and 'avg' are used to store the returning values of the Sum and Average functions. This makes the values
     * available to be used in the main method.
     */
    int sum = Sum(a,b,c);
    int avg = Average(a,b,c);


    /*
     * Sending the data to the output screen. Note that std::cout is not used as the std namespace has been declared
     * above. Otherwise to print to screen, std::cout would be needed.
     */
    cout<<"The largest  number is => "<<largestNumber<<endl;
    cout<<"The smallest number is =>"<<smallestNumber<<endl;
    cout<<"The Average  number is => "<<avg<<endl;
    cout<<"The Sum number is =>"<<sum<<endl;

    
    return 0;
}
