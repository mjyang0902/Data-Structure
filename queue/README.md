# Queue
A queue is a fundamental data structure that follows the first-in, first-out (FIFO) policy, meaning that the first element to be removed is always the one that has been in the set for the longest time. This concept mirrors real-world queues, where the customer who has waited the longest is served first, and newly arriving customers take a place at the end of the line. A queue can be implemented using either an array or a linked list.

## Attributes
A queue has two attributes:

- **Head**: The attribute $Q.head$ that indexes or points to the head of the queue.
- **Tail**: The attribute $Q.tail$ that indexes the next location at which a newly arriving element will be inserted into the queue.
  
Initially, both $Q.head$ and $Q.tail$ are set to 0.
  
## Operations
### ENQUEUE
The Enqueue operation is used to insert elements into the queue. It inserts an element at the tail of the queue and updates the tail attribute.

![Figure 1 Enqueue](https://github.com/mjyang0902/Data-Structure/blob/main/queue/figures/queue_enqueue.png)
**Figure 1:** A queue implemented using an array Q[0..5]. Queue elements appear only in the **lightly shaded** poistions. Initially queue is empty. When calling Enqueue, $Q.tail$ will increase by 1 (If $Q.tail = Q.length-1$, $Q.tail$ will update to $0$). The figure shows the queue after calling $Enqueue(Q,4)$, $Enqueue(Q,1)$, and $Enqueue(Q,3)$.

### DEQUEUE
The Dequeue operation is used to remove elements from the queue. It deletes the element at the head of the queue, making the second oldest element the new head, and returns the element represented by the old head.

![Figure 2 Dequeue](https://github.com/mjyang0902/Data-Structure/blob/main/queue/figures/queue_dequeue.png)
**Figure 2:** When calling Dequeue, queue will return the element on the head and $Q.head$ will increase by 1 (If $Q.head = Q.length-1$, $Q.head$ will update to $0$). The figure shows the stack after the calls three Dequeue(), $Q.head$ increase to 3 and return 4,1,3 respectively.

### QUEUE-EMPTY
The Queue-Empty operation checks whether the queue is empty. It is called within the Dequeue operation to prevent underflows, which occur when attempting to dequeue from an empty queue. The queue is considered empty when $$Q.head = Q.tail.$$
Queue-Empty returns true if the queue is empty.

![Figure 3 Queue Empty](https://github.com/mjyang0902/Data-Structure/blob/main/queue/figures/queue_empty.png)

**Figure 3:** The figure shows the situation that the queue is empty, i.e. $Q.head=Q.tail$.

### QUEUE-FULL
In the case of array implementation, a size is specified when initializing the array, limiting the number of elements the queue can hold. The QUEUE-FULL operation is called within Enqueue to prevent overflows, which occur when attempting to enqueue an element into a full queue. The queue is considered full when $$Q.head = Q.tail+1 mod(Q.length) .$$ QUEUE-FULL returns true if the queue is full. It's worth noting that overflows can be avoided by using a list-based implementation or dynamic arrays.

## Time Complexity
| Enqueue | Dequeue | QUEUE-EMPTY | QUEUE-FULL |
|:---:|:---:|:---:|:---:|
| $$O(1)$$ | $$O(1)$$ | $$O(1)$$ | $$O(1)$$ | 

## Usage
### CPlusPlus
To use the queue implementation in your C++ code, follow these steps:

Include the queue.h header file in your code:
```
#include "path_to_queue.h"
```
Replace "path_to_queue.h" with the actual path to the queue.h header file.

Initialize a queue instance using the template syntax:
```
queue<type> my_queue(n);
```
- Replace type with the desired data type for the queue.
- Replace my_queue with a name of your choice for the queue instance.
- Replace n with an integer that represents the maximum number of elements the queue can hold.
  
Enqueueing elements onto the queue:
To add an element x to the queue, use the enqueue method:
```
my_queue.enqueue(x);
```

Dequeueing elements from the queue:
To remove and retrieve an element from the head of the queue, use the dequeue method:
```
my_queue.dequeue();
```
Feel free to modify and expand upon these code snippets to integrate the queue implementation seamlessly into your C++ projects.
