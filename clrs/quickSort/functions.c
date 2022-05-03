#include "header.h"



// running time theta(n)
int partition(int arr[], int p, int r){
    
    int x = arr[r];
    int i = p-1;

    int temp = 0;

    for(int j = p; j < r-1; j++){
        if(arr[j] <= x){
            i = i + 1;
            
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i+1] = arr[r];
    arr[r] = temp;
    
    return i + 1;
}

int quickSort(int arr[], int p, int r){
    int q;
    if (p < r){
        q = partition(arr, p, r);
        quickSort(arr, p, q-1);
        quickSort(arr, q+1, r);
    }
    return 0;
}