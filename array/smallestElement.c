#include <stdio.h>

// Smallest Element Function
int smallestElement(int *ptr, int size){
  int small = ptr[1];
  for (int i = 0; i < size; i++){
    if(small > ptr[i]){
      small = ptr[i];
    }
  }
  return small;
  
}

// Main Function
int main(){
  int arr[] = {2,3,1,10,5};
  int smallest = 0;
  int size = sizeof arr/ sizeof arr[0];
  
  smallest = smallestElement(arr, size);
  
  int largest = largestElement(arr,size);
  
  printf("The smallest number is %d\n", smallest);

  return 0;
}

