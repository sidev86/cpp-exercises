#include "LibraryCard.h"

LibraryCard::LibraryCard(const string &cardHolderName)
{
    this->cardHolderName = cardHolderName;
    booksCheckedOut = 0;
}

void LibraryCard::checkoutBook()
{
    booksCheckedOut += 1;
}

void LibraryCard::returnBook()
{
    if (booksCheckedOut > 0)
    {
        booksCheckedOut -= 1;
    }
    else
    {
        cout << "You don't have books to return" << endl;
    }
}

string LibraryCard::getCardHolderName() const
{
    return cardHolderName;
}

int LibraryCard::getBooksCheckedOut() const
{
    return booksCheckedOut;
}