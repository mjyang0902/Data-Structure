# Insertion Sort

Insertion sort is a sorting algorithm that mimics the way many people sort a hand of playing cards. Imagine starting with an empty left hand and a set of cards face down on the table. You pick up one card at a time from the table and insert it into the correct position in your left hand. To find the right position for a card, you compare it with each card already in your left hand, moving from right to left. At all times, the cards held in your left hand remain sorted.

To sort an array with size `n`, we determine each element's position by comparing it with its predecessor and repeatedly exchanging positions until the predecessor is smaller than it. This process continues until all `n` elements are in their correct positions, resulting in a sorted array.

![Figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/insertion_sort.png)

**Figure 1:** Insertion Sort

## Time Complexity
| Average case | Worst case | Best case |
|:------------:|:----------:|:---------:|
| $$\theta(n^2)$$ | $$\theta(n^2)$$ | $$\theta(n)$$ |

## Stability
###　True


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
Replace arr with your integer array.
Replace size with the integer representing the length of your array.

The array will then be sorted.
