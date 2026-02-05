#include "ListStack.h"

void printStack(ListStack& stack);

int main()
{
    ListStack stack;

    stack.push(150);
    stack.push(71);
    stack.push(36);
    stack.push(48);
    stack.push(254);
    stack.push(42);
    stack.push(88);

    cout << "Top of stack is " << stack.peek() << endl;


    printStack(stack);

    return 0;
}

void printStack(ListStack& stack)
{
    ListStack temp;
    int data;
    cout << "\n--STACK CONTENT--" << endl; 
    while(!stack.isEmpty())
    {
        data = stack.pop();
        cout << data << endl;
        temp.push(data);
    }
    
    while(!temp.isEmpty())
    {
        stack.push(temp.pop());
    }

    
}