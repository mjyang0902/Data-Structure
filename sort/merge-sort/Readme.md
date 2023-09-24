# Merge Sort
Merge sort is a sorting algorithm using divide and conquer, which breaks the task into several subtasks which is similar to the original task but smaller in size. By solving these subtasks recursively, and then combine these solutions to create the solution of the orginal task.

Merge sort uses the same idea, which divides the length of the array into half recursively, until the length is equal to $1$, and keep combine the sorted array which length are closed recursively to get the sorted array of the original array. The key point is how to **merge** two sorted array efficiently. 

## Merge 
We use the procedure MERGE($A,p,q,r$) to do the **merge** step, $A$ is an array and $p,q,$ and $r$ are indices into the array such that $p\leq q < r$. $A[p..q]$ and $A[q+1..r]$ are two sorted array, and the procedure will **merge** these two array and put the sorted array in $A[p..r]$. The method is as below
1. First copy the array $A[p..q]$ to $L[1..n_1]$, copy the array $A[q+1..r]$ to $R[1..n_2]$.
2. Compare the first elements in $L$ and $R$, put the smaller one into array $A$(if equal, then choose the element in $L$), and remove it(index plus 1) from it's original array($L$ or $R$).
3. Keep doing this until one array of $L$ or $R$ is empty, put the remain element in the other one to array $A$.
Then we merge the two sorted arrays.  

![figure 1](https://github.com/mjyang0902/Data-Structure/blob/main/sort/figures/merge_sort_merge.png)

**figure 1: ** In (a), we copy $A[p..q]$ to $L[1..n_1]$, copy the array $A[q+1..r]$ to $R[1..n_2]$. Then we compare $L[i]$ and $R[j]$, which is 1 and 2. For $1\leq 2$, we put $L[i]$ to $A[k]$ and let i+1, k+1, which is show in (b). In (b), for $L[i]=4\geq 2=R[j]$, we put R[j] to A[k], and j+1, k+1, and which is show in (b) to (c). The same way in (c) to (d).

## Merge Sort
We use the procedure MERGE-SORT(A,p,r) to do the sorting. When call MERGE-SORT(A,p,r), we will half the length of the array, i.e. let $q = \lfloor \frac{p+r}{2}\rfloor$,
