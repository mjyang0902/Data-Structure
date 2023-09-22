#ifndef INSERTION_SORT_H 
#define INSERTION_SORT_H

void insertion_sort(int* arr, int size){
  for(int j=1;j<size;j++){
    int key = arr[j];
    int i = j-1;
    while(i>-1 && arr[i]>key){
      arr[i+1] = arr[i];
      i = i-1;
    }
    arr[i+1] = key;
  }
}
#endif
