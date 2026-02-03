#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include "Queue.h"
#include <iostream>

using namespace std;

class ArrayQueue : public Queue
{
    public:
        ArrayQueue(int s = 16) : MAX_SIZE(s)
        {
            front = 0;
            back = 0;
            m_numElements = 0;
            m_array = new int[MAX_SIZE];
        }

        virtual ~ArrayQueue()
        {
            delete[] m_array;
        }

        void enqueue(int newEntry) override
        {
            if (m_numElements < MAX_SIZE - 1)
            {
                m_array[back] = newEntry;
                back = (back + 1) % MAX_SIZE;
                m_numElements++;
            }
            else
            {
                cout << "Cannot enqueue. The queue is full" << endl;
            }
        }
        int dequeue() override
        {
            if (!isEmpty())
            {
                int data = m_array[front];
                front = (front + 1) % MAX_SIZE;
                m_numElements--;
                return data;
            }
            else
            {
                 cout << "Cannot dequeue. The queue is empty" << endl;
                 return 0;
            }
        }
        int peekFront() const override
        {
            if (!isEmpty())
            {
                return m_array[front];
            }
            else
            {
                cout << "Cannot peek from the front. The queue is empty" << endl;
                return 0;
            }
        }
        bool isEmpty() const override
        {
            return m_numElements == 0;
        }
        void makeEmpty() override
        {
            front = 0;
            back = 0;
            m_numElements = 0;
        }

    private:
        int* m_array;
        const int MAX_SIZE;
        int front;
        int back;
        int m_numElements;

};


#endif