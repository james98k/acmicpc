#include <stdio.h>
int main(){
    int index, value;
    int array[9];

    for(int i = 0; i < 9; i++){
        scanf("%d", &array[i]);

        if(i == 0){
            index = i;
            value = array[i];
        }
        else{
            if(value <= array[i]){
                value = array[i];
                index = i;
            }
        }
        
    }
    printf("%d\n%d", value, index + 1);
}