//
// Created by Stephen O Brien on 16/07/2018.
//

#include "Book.h"


// initialising the default constructor

Book::Book(){
    title="undefined";
    yearOfPublication = 1900;
    pages = 0;
    genre="undefined";
    author="undefined";
}

// overloaded constructor

Book::Book(string title1, string author1, string genre1, int pages1, int yearOfPublication1) {
    title = title1;
    author = author1;
    genre= genre1;
    pages = pages1;
    yearOfPublication = yearOfPublication1;
}

// getters and setters

void Book::setTitle(string t){
    title = t;
}
string Book::getTitle() {
    return title;
}
void Book::setAuthor(string a) {
    author = a;
}
string Book::getAuthor() {
    return author;
}
void Book::setGenre(string g) {
    genre = g;
}
string Book::getGenre() {
    return genre;
}

void Book::setPages(int p) {
    pages= p;
}

int Book::getPages(){
    return pages;
}

// printing the information within the class
void Book::printInfo() {
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Genre : "<<genre<<endl;
    cout<<"Pages : "<<pages<<endl;
    cout<<"Year of Publication : "<<yearOfPublication<<endl;

}



