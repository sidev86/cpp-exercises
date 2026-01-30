#ifndef LINKED_STACK_H
#define LINKED_STACK_H
#include "Stack.h"
#include "Node.h"
#include <iostream>

using namespace std;

class LinkedStack : public Stack
{
    public:
        LinkedStack() : top(nullptr) {}

        virtual ~LinkedStack()
        {
            makeEmpty();
        }

        void push(int newEntry) override
        {
            Node* newNode = new Node(newEntry, top);
            top = newNode;
        }

        int pop() override
        {
            if (isEmpty())
            {
                cout << "Cannot pop values. Stack is empty" << endl;
                return 0;
            }
            Node* temp = top;
            int data = temp->getData();
            top = top->getNext();
            delete temp;
            temp = nullptr;
            return data;
        }
        
        int peek() const override
        {
            if (isEmpty())
            {
                cout << "Cannot peek values. Stack is empty" << endl;
                return 0;
            }
            return top->getData();
        }
        
        bool isEmpty() const override
        {
            return top == nullptr;
        }
        
        void makeEmpty() override
        {
            while (top != nullptr)
            {
                Node* temp = top;
                top = top->getNext();
                delete temp;
                temp = nullptr;
            }
        }

    private:
        Node* top;
        int data;


};


#endif