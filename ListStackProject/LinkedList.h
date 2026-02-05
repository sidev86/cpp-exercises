#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "List.h"
#include "Node.h"


using namespace std;

class LinkedList : public List
{
    public:
        LinkedList()
        {
            m_head = nullptr;
            m_numElements = 0;
        }

        virtual ~LinkedList()
        {
            makeEmpty();
        }

        void add(int newEntry) override
        {
			Node* newNode = new Node(newEntry, nullptr);

			if (m_head == nullptr) 
            {
				m_head = newNode;
			}
			else 
            {
				Node* walker = m_head;                        
				while (walker->getNext() != nullptr) 
                {
					walker = walker->getNext();
				}

				walker->setNext(newNode);
			}
			m_numElements++;
		}


		void add(int newEntry, int position) override 
        {
			if (position < 0 || position > m_numElements) 
            {
				cout << "Error: Cannot add at specified position." << endl;
				return;
			}

			Node* newNode = new Node(newEntry, nullptr);

			if (position == 0) 
            {
				newNode->setNext(m_head);
				m_head = newNode;
			}
			else 
            {
				Node* nodeBefore = m_head;

				for (int i = 0; i < position - 1; i++) 
                {
					nodeBefore = nodeBefore->getNext();
				}
				                                                         
				newNode->setNext(nodeBefore->getNext());     
				nodeBefore->setNext(newNode);
			}
			m_numElements++;
		}

		void set(int newEntry, int position) override 
        {
			if (position < 0 || position > m_numElements) 
            {
				cout << "Error:  Invalid position." << endl;
				return;
			}

			Node* walker = m_head;

			for (int i = 0; i < position; i++) 
            {
				walker = walker->getNext();
			}

			walker->setData(newEntry);
		}

		bool contains(int entry) const override 
        {
			return find(entry) != -1;
		}

		int find(int entry) const override 
        {
			Node* walker = m_head;
			int index = 0;

			while (walker != nullptr) 
            {
				if (walker->getData() == entry)
                {
					return index;
				}
				walker = walker->getNext();
				index++;
			}

			return -1;
		}

		int remove(int position) override 
        {
			if (position < 0 || position >= m_numElements) 
            {
				cout << "Error:  Cannot remove at specified position." << endl;
				return 0;
			}

			int dataToReturn = 0;

			if (position == 0) 
            {
				Node* temp = m_head;
				dataToReturn = temp->getData();
				m_head = m_head->getNext();
				delete temp;
			}
			else 
            {
				Node* nodeBefore = m_head;
				for (int i = 0; i < position - 1; i++) 
                {
					nodeBefore = nodeBefore->getNext();
				}

				Node* nodeToRemove = nodeBefore->getNext();
				Node* nodeAfter = nodeToRemove->getNext();
				dataToReturn = nodeToRemove->getData();

				nodeBefore->setNext(nodeAfter);
				delete nodeToRemove;
			}

			m_numElements--;
			return dataToReturn;
		}

		void makeEmpty() override
        {
			Node* temp;
			while (m_head != nullptr) 
            {
				temp = m_head;
				m_head = m_head->getNext();
				delete temp;
			}
		}

		int size() const override 
        {
			return m_numElements;
		}

		bool isEmpty() const override 
        {
			return m_numElements == 0;
		}

		void printList() const override 
        {
			Node* walker = m_head;
            cout << "--- LIST CONTENT ---" << endl;
			while (walker != nullptr) 
            {
				cout << walker->getData() << endl;
				walker = walker->getNext();
			}
            cout << endl;
		}


    private:
        Node* m_head;
        int m_numElements;

};


#endif