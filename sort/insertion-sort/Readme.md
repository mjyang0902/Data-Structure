# Insertion sort
Insertion sort is a sorting algorithm, which works the way many people sort a hand of playing cards. We start with an empty left hand and the cards face down on the table. We then
remove one card at a time form the table and insert it into the correct position in the left hand. To find the correct poistion for a card, we compare it with each of the cards already in the left hand,
from right to left. St all times, the cards held in the left hand are sorted.
To sort an array with size n, we determine an elements position by compare itself with its predecessor, and keep exchange the poistion until the predecessor is smaller than it, and the result is just like be inserted into correct poistion.
After we determine all n elements poistion, the array is being sorted.

![figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/insertion_sort.png)
**Figure 1 :**  Insertion sort

## Time Complexity
| Average case | Worst case | Best case |
|:---:|:---:|:---:|
| $$\Theta(n^2)$$ | $$\Theta(n^2)$$ | $$\Theta(n)$$ |

** Stability: True**

## Usage
### CPlusPlus
To use the insertion sort in your C++ code, follow these steps:
1. Include the insertion_sort.h header file in your code:
```
#include "path_to_insertion_sort.h"
```
Replace "path_to_insertion_sort.h" with the actual path to the insertion_sort.h header file.

2. Call the function insertion_sort
```
insertion_sort(arr, size);
```
- Replace `arr` with the desired data, notice that it must be integer array.
- Replace `size` with integer which represent the length of your desired array.

Then the array will be sorted.
