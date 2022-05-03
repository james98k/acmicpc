void CountingSort (int a[], int b[], int k){
    int c[k];
    for(int i = 0 ; i < k; i++){
        c[i] = 0;
    }

    for(int j = 1; j < sizeof(a); j++){
        c[a[j]] = c[a[j]] +1;
    }
    
    for(int i = 1; i < k; i++){
        c[i] = c[i] + c[i -1];
    }

    for(int j = sizeof(a); j > 1; j--){
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] -1;
    }


}