#include "Node.h"
#include <iostream>

using namespace std;

Node* createChain();
void printChain(Node* const head);
void deleteChain(Node*& head);

int main()
{
    Node* theHead = createChain();
    printChain(theHead);
    deleteChain(theHead);
    return 0;
}

Node* createChain()
{
    Node* head = nullptr;

    for (int i = 0; i < 25; i++)
    {
        head = new Node(i, head);
    }

    return head;
}
void printChain(Node* const head)
{
    Node* walker = head;
    int totalNodes = 0;

    while(walker != nullptr)
    {
        cout << walker->getData() << endl;
        walker = walker->getNext();
        totalNodes++;
    }

    cout << "Number of nodes -> " << totalNodes << endl;
}

void deleteChain(Node*& head)
{
    Node* nodeToDelete;
    while (head != nullptr)
    {
        nodeToDelete = head;
        head = head->getNext();
        delete nodeToDelete;
    }
}