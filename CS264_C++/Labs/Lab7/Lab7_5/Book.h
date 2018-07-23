//
// Created by Stephen O Brien on 16/07/2018.
//

#ifndef LAB7_5_BOOK_H
#define LAB7_5_BOOK_H

#include <iostream>
using namespace std;
class Book {
private:

    int pages;
    int yearOfPublication;
    string author;
    string genre;
    string title;
public:
    Book();
    Book(string title1, string author1, string genre1, int pages1, int yearOfPublication1 );
    void setTitle(string t);
    string getTitle();
    void setAuthor(string a);
    string getAuthor();
    void setGenre(string g);
    string getGenre();
    void setPages(int p);
    int getPages();
    void setYearOfPublication(int y);
    int getYearOfPublication();
    void printInfo();

};


#endif //LAB7_5_BOOK_H
