# Insertion Sort

**Insertion Sort** is a sorting algorithm that imitates how people naturally sort a hand of playing cards. Imagine starting with an empty left hand and a set of cards face down on the table. You pick up one card at a time from the table and insert it into the correct position in your left hand. To find the right position for a card, you compare it with each card already in your left hand, moving from right to left. At all times, the cards held in your left hand remain sorted.

To sort an array with size $n$, we determine each element's position by comparing it with its predecessor and repeatedly shifting elements to the left until the correct position is found. This process continues until all $n$ elements are in their correct positions, resulting in a sorted array.

![Figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/insertion_sort.png)

**Figure 1:** In each iteration, the black element is compared with its predecessor (gray), moving from right to left. The element is shifted to the left until it finds the correct position, simulating an insertion.

## Time Complexity
| Average case | Worst case | Best case |
|:------------:|:----------:|:---------:|
| $$\Theta(n^2)$$ | $$\Theta(n^2)$$ | $$\Theta(n)$$ |

In the best-case scenario, when the sequence is already in **increasing order**, the while loop only executes once for each iteration. There are a total of $n-1$ iterations, which results in a time complexity of $\Theta(n)$.

## Stability: True
Insertion sort maintains stability because elements are only shifted to the left when the predecessor is smaller (not including equal), and these shifts occur with adjacent elements. This ensures that the relative order of elements with equal values remains unchanged.

## Usage

### C++

To use the Insertion Sort in your C++ code, follow these steps:

1. Include the `insertion_sort.h` header file in your code:
   ```
   #include "path_to_insertion_sort.h"
   ```
Replace "path_to_insertion_sort.h" with the actual path to the insertion_sort.h header file.

2. Call the insertion_sort function:
   ```
    insertion_sort(arr, size);
   ```
 - Replace arr with your integer array.
 - Replace size with the integer representing the length of your array.

The array will then be sorted.
