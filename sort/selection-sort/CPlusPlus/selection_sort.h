#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

void selection_sort(int* arr, int size){
  for(int i=0;i<size-1;i++){
    int min = arr[i];
    int index = i;
    for(int j=i+1;j<size;j++){
      if(arr[j] < min){
        min = arr[j];
        index = j;
      }
    }
    arr[index] = arr[i];
    arr[i] = min;
  }
}
#endif // !SELECTION_SORT_H
