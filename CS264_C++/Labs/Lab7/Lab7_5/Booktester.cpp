//
// Created by Stephen O Brien on 16/07/2018.
//

#include "Booktester.h"

#include "Book.h"

#include <vector>

int main(){
    //making book objects

    Book* lotr = new Book("Fellowship of the Ring", "J.R.R Tolkien","Fantasy",341,1961);
    lotr->setTitle("Lord of the Rings: Fellowship of the Ring");

    Book* lotr2 = new Book("Lord of the Rings: The Two Towers","J.R.R Tolkien","Fantasy",401,1965);

    Book* lotr3 = new Book("Lord of the Rings: Return of the King","J.R.R Tolkien","Fantasy",460,1970);



    //making a vector to store the books in
    vector<Book*> trilogy;

    trilogy.push_back(lotr);
    trilogy.push_back(lotr2);
    trilogy.push_back(lotr3);

    //showing data from the vector
    cout<<trilogy[0]->getTitle();






    return 0;
}
