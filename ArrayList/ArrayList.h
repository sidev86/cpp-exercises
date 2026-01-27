#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"

using namespace std;

class ArrayList : public List
{
    public:
        ArrayList(int s = 16) : MAX_SIZE(s) {
            m_array = new int[MAX_SIZE];
            m_numElements = 0;
        }

        void add(int newEntry) override
        {   
            if (m_numElements >= MAX_SIZE)
            {
                cout << "Cannot add any more elements. List is full." << endl;
                return; 
            }

            m_array[m_numElements] = newEntry; 
            m_numElements++;
        }
        void add(int newEntry, int position) override
        {
            if (m_numElements >= MAX_SIZE)
            {
                cout << "Cannot add any more elements. List is full." << endl;
                return; 
            }

            if (position < 0 || position > m_numElements)
            {
                cout << "Position out of range" << endl;
                return;
            }

            for (int i = m_numElements; i > position; i--)
            {
                m_array[i] = m_array[i - 1];
            }

            m_array[position] = newEntry;
            m_numElements++;

        }
        void set(int newEntry, int position) override
        {       
            if (position < 0 || position > m_numElements)
            {
                cout << "Invalid position for set" << endl;
                return;
            }

            m_array[position] = newEntry;
        }
        bool contains(int entry) const override
        {
            for(int i = 0; i < m_numElements; i++)
            {
                if(m_array[i] == entry)
                {
                    return true;
                }
            }

            return false;
        }
        int find(int entry) const override
        {
            for(int i = 0; i < m_numElements; i++)
            {
                if(m_array[i] == entry)
                {
                    return i;
                }
            }
            return -1;
        }
        int remove(int position) override
        {
            if (position < 0 || position > m_numElements)
            {
                cout << "Position out of range" << endl;
                return -1;
            }
            int value = m_array[position];

            for (int i = 0; i < m_numElements - 1; i++)
            {
                m_array[i] = m_array[i + 1];
            }
            m_numElements--; 
            return value;

        }
        void makeEmpty() override
        {
            m_numElements = 0;
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
            for (int i = 0; i < m_numElements; i++)
            {
                cout << m_array[i] << endl;
            }
        }

    private:
        int* m_array;
        const int MAX_SIZE;
        int m_numElements;
};

#endif