#ifndef LIST_STACK_H
#define LIST_STACK_H

#include "Stack.h"
#include "LinkedList.h"

class ListStack : public Stack
{
public:

    ListStack() {}

    virtual ~ListStack() 
    {
        makeEmpty();
    }

    void push(int value) override
    {
        list.add(value, 0);
    }

    int pop() override
    {
        if (list.isEmpty())
        {
            cout << "Error: stack is empty" << endl;
            return 0;
        }

        return list.remove(0);
    }

    int peek() override
    {
        int value = list.remove(0);
        push(value);
        return value;
    }

    bool isEmpty() const override
    {
        return list.isEmpty();
    }

    void makeEmpty() override
    {
        list.makeEmpty();
    }

private:
    LinkedList list;
};

#endif