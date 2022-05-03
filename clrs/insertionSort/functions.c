int insertionSort(int arr[]){

    int key = 0;
    int i = 0 ;
    for(int j = 2; j < sizeof(arr); j++){

        key = arr[j];
        i = j-1;
        while(i > 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

    return 0;
}