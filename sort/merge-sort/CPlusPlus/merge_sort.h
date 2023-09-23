#ifndef MERGE_SORT_H
#define MERGE_SORT_H
void merge(int* arr, int const p, int const q, int const r){
  // determine the length of the two subarrays
  int const n_1 = q-p+1;
  int const n_2 = r-q;

  // initialize L, R be two new arrays
  int* L = new int[n_1];
  int* R = new int[n_2];

  // copy the elements in arr[p..q] to L[0..n_1-1], arr[q+1..r] to R[0..n_2-1] 
  for(int i=0;i<n_1;i++){
    L[i] = arr[p+i];
  }
  for(int i=0;i<n_2;i++){
    R[i] = arr[q+i+1];
  }

  // initialize the index, which represents the elements in L and R will be compare  
  int i_l = 0;
  int i_r = 0;

  // a represents the index in arr that element will be update
  int i_a = p;
  
  // compare the elements of L and R, and put the smaller one in arr
  while(i_l < n_1 && i_r < n_2){
    if(L[i_l] <= R[i_r]){
      arr[i_a] = L[i_l];
      i_l += 1;
    }
    else{
      arr[i_a] = R[i_r];
      i_r += 1;
    }
    i_a += 1;
  }

  // all elements of R is in arr, but not L 
  while(i_l < n_1){
    arr[i_a] = L[i_l];
    i_l += 1;
    i_a += 1;
  }

  // all elements of L is in arr, but not R 
  while(i_r < n_2){
    arr[i_a] = R[i_r];
    i_r += 1;
    i_a += 1;
  }

  // delete subarray L and R 
  delete[] L;
  delete[] R;
}

void merge_sort(int* arr, int const p, int const r){
  if(p<r){
    int q = (p+r) / 2;
    merge_sort(arr, p, q);
    merge_sort(arr, q+1, r);
    merge(arr, p, q, r);
  }
}

#endif
