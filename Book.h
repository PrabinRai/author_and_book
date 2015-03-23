/*
Program: Book.h
Name: Prabin rai
Date: 2015/3/23
*/
# include"Author.h"

using namespace std;

class Book{
private:
    string name;
    Author author;
    float price;
    int quantity;

public:
    Book(string,Author,float);
    Book(string,Author,float,int);

    void setPrice(float);
    int getPrice();

    void setQuantity(int);
    int getQuantity();

    string getName();
    Author getAuthor();

    string toString();
};
