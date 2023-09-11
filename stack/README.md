# Stack
A stack is a fundamental data structure that follows the *last-in, first-out* (LIFO) policy, meaning that the most recently inserted element is the first one to be removed. This concept draws parallels with real-world stacks, like the spring-loaded plates in cafeterias, where only the top plate is accessible. A stack can be implemented using either an **array** or a **linked list**.

## Attribute
A stack is characterized by its top attribute, which represents the last element that was pushed onto the stack. In the case of an array implementation, top corresponds to the index of the last element in the array.

## Operations
### PUSH
The `Push` operation adds an element to the top of the stack, updating the top attribute to reflect the newly inserted element.

![Figure 1 Push](https://github.com/mjyang0902/Data-Structure/blob/main/stack/figures/stack_push.png)
**Figure 1 :**  An array implementation of a stack $S$. Stack elements appear only in the **lightly shaded** poisitions. The stack $S$ has one element 4 in the beginning. When calling Push, $S.top$ will increase by 1 and add the new element to the top of the stack. The figure shows the stack after the calls Push($S$,1) and Push($S$,3).

### POP
The `Pop` operation removes the top element from the stack. This action causes the second-to-last element to become the new top, and the element previously at the top is returned.
### TOP (PEEK)
The `Top` or `Peek` operation retrieves the top element of the stack without removing it. While some users might find this operation useful for specific tasks, it's important to note that it's not included in our code implementation, as it's not covered in the textbook.
### STACK-EMPTY
The `Stack-Empty` operation determines whether the stack is empty. It's invoked within the `Pop` operation to prevent `underflows`, which occur when attempting to pop an element from an empty stack. If the stack is indeed empty, Stack-Empty returns `true`.
### STACK-FULL
In cases where an array is used for implementation, a fixed size is established upon array initialization. This size restriction limits the number of elements the stack can hold. The `Stack-Full` operation is used within the `Push` operation to prevent `overflows`—trying to push an element onto a full stack. When the stack is full, Stack-Full returns `true`. It's important to mention that overflow issues **can be avoided** by using a **list-based implementation** or a **dynamic array**.
## Time Complexity
| Push | Pop | Stack-Empty | Stack-Full |
|:---:|:---:|:---:|:---:|
| $$O(1)$$ | $$O(1)$$ | $$O(1)$$ | $$O(1)$$ | 

## Usage
### CPlusPlus
To use the stack implementation in your C++ code, follow these steps:
1. Include the stack.h header file in your code:
```
#include "path_to_stack.h"
```
Replace "path_to_stack.h" with the actual path to the stack.h header file.

2. Initialize a stack instance using the template syntax:
```
stack<type> my_stack(n); 
```
- Replace `type` with the desired data type for the stack.
- Replace `my_stack` with a name of your choice for the stack instance.
- Replace `n` with an integer that represents the maximum number of elements the stack can hold.

3. Pushing elements onto the stack:
To add an element x to the stack, use the `push` method:
```
my_stack.push(x);
```
4. Popping elements from the stack:
To remove and retrieve an element from the top of the stack, use the `pop` method:
```
my_stack.pop();
```
