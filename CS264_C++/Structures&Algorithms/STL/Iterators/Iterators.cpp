
//  CS264_Study_Material
//  Created by Stephen O Brien on 27/11/2017.
//  Copyright © 2017 Stephen O Brien. All rights reserved.
//

 //Iterators\\

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /* we declare a vector that takes integers.
     */
vector <int> col;
    
    /* This next loop uses the built in function of "variable_name.push_back(int)", to push an
     integer onto the vector named "col". It then outputs the vector col slot at [i].
     */
    
    for (int i= 0; i<10; i++)
    {
        col.push_back(i);
        
        cout<<col[i]<<endl;
    }
    
    /* this next loop uses an iterator which needs to be declared in the for loop. It
     has a set of functions (begin and end) that can be used to determine the parameters
     of the vector.
     Under the current parameters, i will start at thhe beginning of the vector.
     It will keep running once i is not equal to the end of the vector (i!=col.end)
     and it increments i before it uses it.
     line 42 shows us that '*i' finds the value in the slot at vector [i]. we can
     actually manipulate this value at this point. 
     */

    
    for (vector<int>::iterator i = col.begin(); i!=col.end();++i)
    {
        cout<<*i<<endl;
    }
    return 0;
}
