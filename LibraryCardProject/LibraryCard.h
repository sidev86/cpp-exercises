#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

#include <iostream>
#include <string>

using namespace std;
class LibraryCard
{
public:
    LibraryCard(const string &cardHolderName);
    void checkoutBook();
    void returnBook();
    string getCardHolderName() const;
    int getBooksCheckedOut() const;

private:
    string cardHolderName;
    int booksCheckedOut;
};

#endif