#include<stdio.h>
#include<assert.h>

int findIndex(int *ptr, int size, int num){
    for(int i =0; i<size;i++){
        if (ptr[i]==num)
            return i;
        
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,7,9,10,30};

    int size = sizeof arr/ sizeof arr[0];

    int num = 3;

    int result = findIndex(arr, size, num);

    printf("The index is of %d is present at %d", num, result);

    assert(findIndex(arr, 4, 2)==1);
    assert(findIndex(arr, 4, 2)==2);
    assert(findIndex(arr, 4, 2)==3);
    assert(findIndex(arr, 4, 2)==4);
    assert(findIndex(arr, 4, 2)==5);
    assert(findIndex(arr, 4, 2)==6);
    assert(findIndex(arr, 4, 2)==7);

    return 0;
}