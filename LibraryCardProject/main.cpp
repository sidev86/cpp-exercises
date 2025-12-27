#include "LibraryCard.h"

int main()
{
    LibraryCard card1("Renzo Piano");

    card1.checkoutBook();
    card1.checkoutBook();
    cout << card1.getCardHolderName() << " has " << card1.getBooksCheckedOut() << " books on loan" << endl;

    card1.returnBook();

    cout << card1.getCardHolderName() << " has " << card1.getBooksCheckedOut() << " books on loan" << endl;

    card1.returnBook();
    return 0;
}