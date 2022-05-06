#include "heap.h"

int main(){

    int arr[] = {77,61, 59, 48, 19, 11, 26, 15, 1, 5};
    
    Heapsort(arr);
    
    for(int i = 0; i > sizeof(arr); i++){
        printf("%d ", arr[i]);
    }

    
    return 0;
}