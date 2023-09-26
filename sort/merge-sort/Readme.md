# Merge Sort

**Merge Sort** is a highly efficient sorting algorithm that follows the divide and conquer paradigm. It divides the sorting task into smaller subtasks, solves these subtasks recursively, and then combines their solutions to produce the final sorted result.

Merge Sort repeatedly divides the length of an array in half until the length becomes 1, effectively breaking it into smaller, sorted subarrays. The key step is the **merge** operation, which efficiently combines two sorted subarrays.

## Merge
The **merge** operation is performed using the MERGE($A, p, q, r$) procedure. In this procedure, $A$ represents the array, and $p$, $q$, and $r$ are indices within the array, with $p \leq q < r$. The subarrays $A[p..q]$ and $A[q+1..r]$ are two sorted subarrays that need to be merged into a single sorted subarray within $A[p..r]$. The procedure can be summarized as follows:

1. Copy the elements from array $A[p..q]$ to $L[1..n_1]$ and the elements from array $A[q+1..r]$ to $R[1..n_2]$.
2. Compare the first elements in $L$ and $R$. Place the smaller element into array $A$ (in case of equality, choose the element from $L$) and remove it from its original array ($L$ or $R$).
3. Continue this process until one of the arrays, either $L$ or $R$, becomes empty. Then, place the remaining elements from the other array into array $A$ to complete the merge operation.

This step efficiently merges two sorted subarrays.

![Figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_merge.png)

**Figure 1:** In (a), we copy $A[p..q]$ to $L[1..n_1]$ and $A[q+1..r]$ to $R[1..n_2]$. We then compare $L[i]$ and $R[j]$ (which are 1 and 2). Since $1 \leq 2$, we place $L[i]$ into $A[k]$ and increment $i$ and $k$, as shown in (b). In (b), since $L[i]=4 \geq 2=R[j]$, we place $R[j]$ into $A[k]$), incrementing $j$ and $k$, as shown from (b) to (c). This process continues in (c) and (d).

## Merge Sort
The **Merge Sort** operation is executed using the MERGE-SORT($A, p, r$) procedure for sorting. When calling MERGE-SORT($A, p, r$), we calculate the midpoint as $q = \lfloor \frac{p + r}{2} \rfloor$. We then create two subtasks to sort $A[p..q]$ and $A[q+1..r]$. These subtasks are solved recursively until $p \geq r$, meaning the subarray contains only one element or is empty (which actually happens only in the case of a single element), and is thus trivially sorted. Once we have two sorted subarrays, we use the MERGE($A, p, q, r$) procedure mentioned above to merge them and obtain the final sorted array.

## Time Complexity
| Average case | Worst case | Best case |
|:------------:|:----------:|:---------:|
| $$\Theta(n\log n)$$ | $$\Theta(n\log n)$$ | $$\Theta(n\log n)$$ |

**Proof of time complexity:**  
  First, we determine the time complexity of MERGE. Suppose we use MERGE to merge two sorted subarrays with lengths $n_1$ and $n_2$. In step 1, copying the elements from the original array to $L$ and $R$ takes $\Theta(n_1 + n_2)$. For steps 2 and 3, each while loop iteration places an element in the correct position within the target array, resulting in a total of $n_1 + n_2$ iterations. Thus, the total time complexity of MERGE is $\Theta(n_1 + n_2)$.
  
  Now, we use $T(n)$ to represent the time complexity of merge sorting an array of length $n$. When we call MERGE-SORT, we recursively call two MERGE-SORT operations to sort arrays with lengths $\lfloor \frac{n}{2}\rfloor$ and $\lceil \frac{n}{2}\rceil$. We then call MERGE to merge two sorted subarrays. This results in the following recursive relation:

![Equation 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_eq1.png)
  
We can simplify this expression by ignoring the floor and ceiling operations, and for $n_1 + n_2 = n$, we have:

 ![Equation 2](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_eq2.png)

By applying the master theorem, we find that $T(n) = \Theta(n\log n)$.

## Stability: True
**Proof of Stability:** 
Suppose we have two stably sorted subarrays. When we merge these two subarrays, if we compare two elements in $L$ and $R and find them equal, we choose the element from $L$ to place in $A$. This ensures that the sorted subarray remains stable. 

When we merge two subarrays, each with only one element, they are already in a sorted and stable order. Merging them will also maintain stability. By repeatedly performing this process, we ensure that the final sorted subarray is also stable.

![Figure 2](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_stable.png)
**Figure 2:** We have to compare $L[i]$ with $R[j]$, and we discover that $L[i]=R[j]=4$. Thus, we put the "4" from $L$ to $A$ to guarantee stability.

## Usage

### C++

To use Merge Sort in your C++ code, follow these steps:

1. Include the `merge_sort.h` header file in your code or copy the code from `merge_sort.h` to your own code:
```
#include "path_to_merge_sort.h"
```
Replace "path_to_merge_sort.h" with the actual path to the merge_sort.h header file.

2. Call the merge_sort function:
```
merge_sort(arr, p, r);
```
- Replace arr with your integer array.
- Replace (p, r) with integers representing the range of indices in your array that you want to sort. For example, if you want to sort an array with a length of $10$, set $p = 0$ and $r = 9$.

After calling the merge_sort function, your subarray will be sorted.
