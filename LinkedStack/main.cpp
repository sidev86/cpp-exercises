#include "LinkedStack.h"

void printStack(LinkedStack& stack);

int main()
{
    LinkedStack stack;

    stack.push(150);
    stack.push(71);
    stack.push(36);
    stack.push(48);
    stack.push(254);
    stack.push(42);
    stack.push(88);

    cout << "Top of stack is " << stack.peek() << endl;

    // while(!stack.isEmpty())
    // {
    //     cout << stack.pop() << endl;
    // }

    printStack(stack);
    printStack(stack);

    return 0;
}

void printStack(LinkedStack& stack)
{
    LinkedStack stack2;
    int data;
    cout << "\n--STACK CONTENT--" << endl; 
    while(!stack.isEmpty())
    {
        data = stack.pop();
        stack2.push(data);
    }   

    while(!stack2.isEmpty())
    {
        cout << stack2.peek() << endl;
        stack.push(stack2.pop());
    }
}