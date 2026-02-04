#include "LinkedQueue.h"


void printQueue(LinkedQueue& queue);

int main()
{
    LinkedQueue queue;

    queue.enqueue(100);
    queue.enqueue(50);
    queue.enqueue(25);
    queue.enqueue(75);
    queue.enqueue(43);

    cout << "First element in queue -> " << queue.peekFront() << endl ;
    printQueue(queue);

    //Trying to dequeue from the empty queue (showing error)
    queue.dequeue();
    return 0;
}

void printQueue(LinkedQueue& queue)
{
    cout << "---QUEUE ELEMENTS---" <<endl;
    
    while(!queue.isEmpty())
    {
        cout << queue.dequeue()<< endl;
    }
    
}