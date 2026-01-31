#include "ArrayQueue.h"




int main()
{
    ArrayQueue queue;

    for (int i = 1; i < 16; i++)
    {
        queue.enqueue(i * 10);
    }

    queue.enqueue(1234);

    while(!queue.isEmpty())
    {
        cout << queue.dequeue() << endl;
    }

    queue.dequeue();

    for (int i = 0; i < 20; i++)
    {
        queue.enqueue(i * 5);
        cout << "Just enqueued " << (i * 5) << endl;
        if (i % 3 == 0)
        {
            cout << "Just dequeued " << queue.dequeue() << endl;
        }
    }

    queue.enqueue(123);
    queue.enqueue(234);
    queue.enqueue(456);
    queue.enqueue(456);

    return 0;
}