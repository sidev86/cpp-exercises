#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <iostream>
#include "Queue.h"
#include "Node.h"

using namespace std;

class LinkedQueue : public Queue
{
    public:
        LinkedQueue()
        {
            m_head = nullptr;
            m_end = nullptr;
        }

        virtual ~LinkedQueue()
        {
            makeEmpty();
        }

        void enqueue(int newEntry) override
        {
            if(m_head == nullptr)
            {
                m_head = new Node(newEntry, nullptr, nullptr);
                m_end = m_head;
            }
            else
            {
                Node* oldNode = m_head;
                Node *newNode = new Node(newEntry, oldNode, nullptr);
                m_head = newNode;
                oldNode->setPrev(newNode);
                newNode->setNext(oldNode);
            }
        }

        int dequeue() override
        {
            if(!isEmpty())
            {
                Node* temp = m_end;
                int dataToReturn = m_end->getData();
                
                m_end = m_end->getPrev();
                delete temp;
                temp = nullptr;
                return dataToReturn;
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
                return m_end->getData();
            }
            else
            {
                cout << "Cannot peek from the front. The queue is empty" << endl;
                return 0;
            }
        }

        bool isEmpty() const override
        {
            return m_end == nullptr;
        }

        void makeEmpty() override
        {
            while(!isEmpty())
            {
                dequeue();
            }
        }

    private:
        Node* m_head;
        Node *m_end;
};


#endif
