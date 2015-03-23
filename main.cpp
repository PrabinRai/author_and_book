/*
Program: Main.cpp
Name: Prabin rai
Date: 2015/3/23
*/

#include <iostream>
# include "Book.h"
//# include<string>

using namespace std;

int main()
{
   string authorName,authorEmail;
   char authorGender;
   int bookPrice,bookQuantity;
   string bookName;

   cout<<"Author name:";
   getline(cin,authorName);

   cout<<"Author's Email:";
   getline(cin,authorEmail);

   cout<<"Author's gender (M/F):";
   cin>>authorGender;
   cin.get();

   cout<<"Name of the book written by the writer:\t";
   getline(cin,bookName);


   cout<<"Print the price of the book:\t";
   cin>>bookPrice;

   cout<<"Print the available quantity of the book:";
   cin>>bookQuantity;

   Author newAuthor(authorName,authorEmail,authorGender);
   Book newBook(bookName,newAuthor,bookPrice,bookQuantity);

   cout<<newBook.toString();
}
