#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
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

    private:
        int data;
        Node* next;
};


#endif