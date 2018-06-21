/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */

/*
 * Question:
 * Write two functions with the following function prototypes:
 * int my string len(char str[])
 * void my string cat(char dest[], char src[], int dest size)
 * Both functions should take zero-terminated strings as input. 
 * The first function should return the length of the string to the calling function. 
 * The second function should take a source and a destination string and
 * the total size of the array pointed to by dest. 
 * It should then concatenate the source string onto the end of the destination string,
 * if and only if the destination string has the capacity to store both strings. 
 * If the destination string does not have the capacity it should not alter either, 
 * print and error, and return to the calling function.

 */



#include <iostream>
 
using namespace std;
 
const int size = 50;
 
 
int my_string_len(char str[])
{
    int count = 0;
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
 
    return count;
}
 
void my_string_cat(char dest[], char src[], int dest_size)
{
    int src_len = my_string_len(src);
    int dest_len = my_string_len(dest);
 
    if (src_len + dest_len < dest_size)
    {
        for (int i = dest_len, j = 0; j < src_len; i++, j++)
        {
            dest[i] = src[j];
        }
 
        cout << "Concatenated string:\n" << dest << endl;
    }
 
    else
    {
        cout << "Not-enough space left in destination string to concatenate with source string" << endl;
    }
}
 
int main()
{
    char src[size], dest[size];
 
    cout << "Enter a source string less than 50 characters long:" << endl;
    cin.getline(src, size);
 
    cout << "Enter a destination string less than 50 characters long:" << endl;
    cin.getline(dest, size);
 
    my_string_cat(dest, src, size);
 
    return 0;
}