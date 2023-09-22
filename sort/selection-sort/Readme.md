# Selection Sort

**Selection Sort** is a straightforward sorting algorithm that operates on the principle of selecting the smallest (or largest) element from an unsorted portion of the array and moving it to the sorted portion.

## How Selection Sort Works

1. **Initialization**: The algorithm starts with the first position in the array, considering it as the initially sorted portion. The rest of the array is considered unsorted.

2. **Sorting Process**:
   - For each position $i$ from 1 to $n-1$, where $n$ is the length of the array:
     - Find the minimum element in the unsorted portion (from position $i$ to $n$).
     - Swap the minimum element with the element at position $i$, effectively expanding the sorted portion by one element.
   
3. **Repeat** step 2 until the entire array is sorted.

This process ensures that the smallest element is placed in the first position, the second smallest in the second position, and so on, ultimately resulting in a sorted array.

**Notice:** We only have to find the minimum element $n-1$ times, for the left element in position $n$ must be the largest element in the array.

![Figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/selection_sort.png)

**Figure 1:** For each iteration, we find the minimum within the elements which are black and gray, and exchange it with the element whose index is labeled in the graph.

## Time Complexity
| Average case | Worst case | Best case |
|:------------:|:----------:|:---------:|
| $$\Theta(n^2)$$ | $$\Theta(n^2)$$ | $$\Theta(n^2)$$ |

- **Explanation**: Selection Sort has a time complexity of $\Theta(n^2)$ in all cases. Finding the minimum element in the unsorted portion requires $\Theta(n)$ operations, and this operation is repeated for each position in the array, resulting in a total time complexity of $Theta(n^2)$.

## Stability: False

## Usage

### C++

To use Selection Sort in your C++ code, follow these steps:

1. Include the `selection_sort.h` header file in your code:
   ```
   #include "path_to_selection_sort.h"
   ```
Replace "path_to_selection_sort.h" with the actual path to the selection_sort.h header file.

2. Call the selection_sort function:
   ```
    selection_sort(arr, size);
   ```
   - Replace arr with your integer array.
   - Replace size with the integer representing the length of your array.
   - 
After calling the selection_sort function, your array will be sorted.
