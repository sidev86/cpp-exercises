#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(int data, Node* next, Node* prev)
        {
            this->data = data;
            this->next = next;
            this->prev = prev;
        }

        int getData() const
        {
            return data;
        }

        void setData(int data)
        {
            this->data = data;
        }

        Node* getNext() const
        {
            return next;
        }

        void setNext(Node* next)
        {
            this->next = next;
        }

        Node* getPrev() const
        {
            return prev;
        }

        void setPrev(Node* prev)
        {
            this->prev = prev;
        }

    private:
        int data;
        Node* next;
        Node* prev;
};


#endif