/*
Program: Author.h
Name: Prabin rai
Date: 2015/3/23
*/



#include<iostream>
# include<string>
//ifndef AUTHOR_H
//define AUTHOR
using namespace std;

class Author{
private:
    string name;
    string email;
    char gender;

public:
    Author(string, string, char);
    Author();
    void setEmail(string );
    string getEmail();
    string getName();
    char getGender();

    //void displayInfo();
    string toString();

};
