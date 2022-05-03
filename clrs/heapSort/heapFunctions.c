#include "heap.h"
int left(int i){
    return i;
}
int right(int i){
    return i + 1;
}

void maxHeapify(int arr[], int i){
    
    int l = left(i);
    int r = right(i);
    int largest;

    if(l < sizeof(arr) && arr[l] > arr[i]){
        largest = l;    
    }
    else
        largest = i;
    if(r <= sizeof(arr) && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != i){
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxHeapify(arr, largest);
    }

}

// O(n)
void buildMaxHeap(int arr[]){

    int heapLength = sizeof(arr);

    for(int i = heapLength/2; i > 1; i--){
        maxHeapify(arr, i);
    }
}

void Heapsort(int arr[]){

    buildMaxHeap(arr);
    for(int i = sizeof(arr); i > 2; i--){
        maxHeapify(arr, i);
    }
}

