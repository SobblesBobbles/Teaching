#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;     // std is not declared in the namespace so it has to be
                                                   // allocated to each member of std. (cout,cin,endl,strings)
    // integer
    int n;                                         // this creates an int with a value of 0, (not null)

    std::cout<<n<<std::endl;

    //string
    std::string word = "word";                     // string declaration

    std::string array [10];                        // You have to declare size, unlike javascript.


    //array
    array[0] = word;

    std::cout<<array[0]<<std::endl;

    // for loop
    for (int i = 0; i<10; i++){

        array[i] = word;
    }

    int j = 5;
    // while loop
    while (j<10){
        std::cout<<j<<std::endl;

        j++;
    }

    // if conditional
    if (j==10){
        std::cout<<"Finished Demonstration"<<std::endl;
    }


    return 0;
}