# Stack
Stack is the data structure that the element deleted from the set is the most recently inserted, i.e. the stack implements a *last-in, first-out* or *LIFO* policy. 
These names are allusions to physical stacks, such as the spring-loaded stacks of plates used in cafeterias, and clearly the top plate is the only plate accessible.
A stack can be implemented using an **array** or **linked list**.

## Attribute
A stack has an attribute `top`, which represents the last element pushed in the stack (In array implementation, top may be used to be the index of the last element in that array.)

## Operations
### PUSH(x)
`Push` is the insert operation in the stack, it will insert the element x to stack and change the `top` to be the new inserted element.
### POP()
`Pop` is the delete operation in the stack, it will delete the top from the stack, let the second last element to be the new top, and return the element represented by the old top.
### TOP() (PEEK())
`Top` or `Peek` is operation that return the top element but doesn't delete that element from the stack. Some people need to use this operation for some special purpose, but we don't implement this operation in code for the textbook doesn't contain it.
### STACK-EMPTY()
`Stack-Empty` is the operation to check whether stack is empty, it will be called in `Pop` to avoid `underflows`, i.e. attempt to pop an empty stack. `Stack-Empty` will return `true` if the stack is empty.
### STACK-FULL()
When using array implementation, becasue we need to give the size when initializing the array, which bounded the how many elements can be store in the stack. It will be called in `Push` to avoid `overflows`, i.e. attempy to push element to a full stack. `Stack-Full` will return `true` if the stack is full.
**Notice:** We can avoid overflow by using list implementation or use dynamic array.

## Time Complexity
| Push | $$O(1)$$ |
|:---:|:---:|
| Pop | $$O(1)$$ | 
| Stack-Empty | $$O(1)$$ |
| Stack-Full | $$O(1)$$ |
