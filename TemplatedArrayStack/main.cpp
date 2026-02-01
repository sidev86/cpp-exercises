#include "ArrayStack.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{

    ArrayStack<string> words;

    cout << "---ARRAY STACK (STRING)---" << endl;

    words.push("surfin");
    words.push("coolio");
    words.push("lessgo");

    while(!words.isEmpty())
    {
        cout << words.pop() << endl;
    }

    cout << "---ARRAY STACK (INT)---" << endl;

    ArrayStack<int> nums;

    nums.push(42);
    nums.push(18);
    nums.push(69); 

    while(!nums.isEmpty())
    {
        cout << nums.pop() << endl;
    }

     cout << "---ARRAY STACK (DOUBLE)---" << endl;

    ArrayStack<int> doubles;

    doubles.push(3.14);
    doubles.push(5.40);
    doubles.push(4.20);

    cout << "Top of the stack -> " << doubles.peek() << endl;

    while(!doubles.isEmpty())
    {
        cout << doubles.pop() << endl;
    }



    return 0;
}
