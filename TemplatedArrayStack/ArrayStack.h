#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "Stack.h"
#include <iostream>

using namespace std;

template <typename T>
class ArrayStack : public Stack<T>
{
    public:
        ArrayStack(int s = 16) : MAX_SIZE(s)
        {
            top = -1;
            m_array = new T[MAX_SIZE];
        }

        ~ArrayStack() override
        {
            delete[] m_array;
        }
        void push(const T& newEntry) override
        {
            if(top < MAX_SIZE - 1)
            {
                top++; 
                m_array[top] = newEntry;
            }
            else
            {
                cout << "Error: cannot push new elements because stack is full" << endl;
            }
        }

        T pop() override
        {
            if(!isEmpty())
            {
                return m_array[top--];
            }
            else
            {
                cout << "Cannot pop elements. Stack is empty" << endl;
                return T();
            }
        }

        T peek() const override
        {
            if(!isEmpty())
            {
                return m_array[top];
            }
            else
            {
                cout << "Cannot peek. Stack is empty" << endl;
                return T();
            }
        }

        bool isEmpty() const override 
        {
            return top == -1;
        }

        void makeEmpty() override
        {
            top = -1;
        }



    private:
        T* m_array; 
        const int MAX_SIZE;
        int top;

};

#endif 