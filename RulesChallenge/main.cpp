#include <iostream>
#include "Buffer.h"

int main()
{

    Buffer buf("Data text");
    Buffer buf2 = buf;
    buf2 = buf;

    Buffer buf3("Banane");
    cout << "buf3 ";
    buf3.print();
    Buffer buf4 = std::move(buf3);

    cout << "buf3 ";
    buf3.print();

    cout << "buf4 ";
    buf4.print();
    return 0;
}