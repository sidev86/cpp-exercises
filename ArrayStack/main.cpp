#include "ArrayStack.h"
#include <iostream>


int main()
{
    ArrayStack stack;
    ArrayStack stack2;

    for (int i = 0; i < 17; i++)
    {
        stack.push(i);
    }

    
    cout << "\n--- STACK 1 ---" << endl;
    while(!stack.isEmpty())
    {
        int value = stack.peek();
        stack2.push(value);
        cout << stack.pop() << endl;
    }

    cout << "\n--- STACK 2 ---" << endl;
    while(!stack2.isEmpty())
    {
        cout << stack2.pop() << endl;
    }



    return 0;

}


