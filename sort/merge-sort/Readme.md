# Merge Sort

**Merge Sort** is a highly efficient sorting algorithm that follows the divide and conquer paradigm. It divides the sorting task into smaller subtasks, solves these subtasks recursively, and then combines their solutions to produce the final sorted result.

Merge Sort divides an array's length into half recursively until the length becomes 1, effectively breaking it into smaller, sorted arrays. The key step is the **merge** operation, which efficiently combines two sorted arrays.

## Merge
The **merge** operation is performed using the MERGE($A, p, q, r$) procedure. Here, $A$ represents an array, and $p$, $q$, and $r$ are indices into the array, with $p \leq q < r$. The subarrays $A[p..q]$ and $A[q+1..r]$ are two sorted arrays that need to be merged into a single sorted array within $A[p..r]$. The procedure is as follows:

1. First, copy the elements from array $A[p..q]$ to $L[1..n_1]$ and copy the elements from array $A[q+1..r]$ to $R[1..n_2]$.
2. Compare the first elements in $L$ and $R$. Place the smaller element into array $A$ (in case of equality, choose the element from $L$), and remove it from its original array ($L$ or $R$).
3. Continue this process until one of the arrays, either $L$ or $R$, becomes empty. Then, place the remaining elements from the other array into array $A$ to complete the merge operation.

This step efficiently merges two sorted arrays.

![Figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_merge.png)

**Figure 1:** In (a), we copy $A[p..q]$ to $L[1..n_1]$ and $A[q+1..r]$ to $R[1..n_2]$. We then compare $L[i]$ and $R[j]$, which are 1 and 2. Since $1 \leq 2$, we place $L[i]$ into $A[k]$ and increment $i$ and $k$, as shown in (b). In (b), since $L[i]=4 \geq 2=R[j]$, we place $R[j]$ into $A[k]$, incrementing $j$ and $k$, as shown from (b) to (c). This process continues in (c) and (d).

## Merge Sort
The **Merge Sort** operation is executed using the MERGE-SORT($A, p, r$) procedure for sorting. When calling MERGE-SORT($A, p, r$), we calculate the midpoint as $q = \lfloor \frac{p + r}{2} \rfloor$. We then create two subtasks to sort $A[p..q]$ and $A[q+1..r]$. These subtasks are solved recursively until $p < r$, meaning the subarray contains only one element or is empty, and is thus trivially sorted. Once we have two sorted arrays, we use the <br> MERGE($A, p, q, r$) procedure mentioned above to merge them and obtain the final sorted array.

## Time Complexity


## Stability: True

## Usage
