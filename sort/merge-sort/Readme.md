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
The **Merge Sort** operation is executed using the MERGE-SORT($A, p, r$) procedure for sorting. When calling MERGE-SORT($A, p, r$), we calculate the midpoint as $q = \lfloor \frac{p + r}{2} \rfloor$. We then create two subtasks to sort $A[p..q]$ and $A[q+1..r]$. These subtasks are solved recursively until $p \geq r$, meaning the subarray contains only one element or is empty(acutually only the situation of one elememt will happen), and is thus trivially sorted. Once we have two sorted arrays, we use the <br> MERGE($A, p, q, r$) procedure mentioned above to merge them and obtain the final sorted array.

## Time Complexity
| Average case | Worst case | Best case |
|:------------:|:----------:|:---------:|
| $$\Theta(n\log n)$$ | $$\Theta(n\log n)$$ | $$\Theta(n\log n)$$ |

**Proof of time complexity:**  
  First, we decide the time complexity of MERGE. Suppose we use MERGE to merge two sorted array with length $n_1$ and $n_2$, in step 1, copy the elements in original array to $L$ and $R$ cost $\Theta(n_1 + n_2)$, for step 2 and 3, each while loop will put an element to the correct place in the target array, thus we total have $n_1+n_2$ loop, which means the total time complexity of MERGE is $\Theta(n_1+n_2)$.
  
  Now, we use $T(n)$ to represents the time complexity of merge sort a length n array. When we call MERGE-SORT, we recursive call two MERGE-SORT with sort arrays with length $\lfloor \frac{n}{2}\rfloor$ and $\lceil \frac{n}{2}\rceil$, and call MERGE two merge two sorted array, and then we get the recursive relation

<img src="https://latex.codecogs.com/svg.latex?\Large&space;x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}" title="\Large x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}" />
![equation](http://www.sciweavers.org/tex2img.php?eq=1%2Bsin%28mc%5E2%29&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=)
  ![Equation 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_eq1.png)
  
We can neglect the floor and ceil and for $n_1+n_2=2$, we have 

 ![Equation 2](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_eq2.png)
  

## Stability: True

## Usage
