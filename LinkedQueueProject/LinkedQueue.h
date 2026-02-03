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
            m_numElements = 0;
        }

        virtual ~LinkedQueue()
        {

        }

        void enqueue(int newEntry) override
        {
            if(m_head == nullptr)
            {
                m_head = new Node(newEntry, nullptr, nullptr);
                m_end = m_head;
                cout << "first node -> " << m_head->getData() << endl;
            }
            else
            {
                Node* oldNode = m_head;
                Node *newNode = new Node(newEntry, oldNode, nullptr);
                m_head = newNode;
                oldNode->setPrev(newNode);
                newNode->setNext(oldNode);
                cout << "new node -> " << m_head->getData() << endl;
                cout << "next node -> " << m_head->getNext()->getData() << endl;
                cout << "old node prev -> " << m_end->getPrev()->getData() << endl;
            }
            m_numElements++;
            cout << "NUm of elements = " << m_numElements << endl;
        }

        int dequeue() override
        {
            if(!isEmpty())
            {
                //cout << "dequeue (not empty)" << endl;

                Node* temp = m_end;
                dataToReturn = m_end->getData();
                
                m_end = m_end->getPrev();
                delete temp;
                temp = nullptr;
                m_numElements--;
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
                return m_head->getData();
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
            while(!isEmpty())
            {
                Node* temp = m_head;
                m_head = m_head->getNext();
                delete temp;
                m_numElements--;
            }
        }

    private:
        int m_numElements;
        int dataToReturn;
        Node* m_head;
        Node *m_end;
};


#endif
