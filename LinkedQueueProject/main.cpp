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

     printQueue(queue);
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