#include <iostream>
#include "Pokemon.h"
#include "Charmander.h"

int main() {

    Pokemon p1 = Charmander(); //slicing

    Pokemon* p2 = new Charmander(); //not sliced because pointers point to the base class

    /*
     * Slicing is when line 7, If p1 is creating an object Charmander into the memory of a Pokemon object,
     * it loses its overridden methods.
     * It only happens without a pointer or address reference.
     * Hence why the output is the original Eat from SuperClass Pokemon
     */






     p1.Eat();
     p2->Eat();




    return 0;
}