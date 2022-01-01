#include <stdio.h>

int num_10952(){
    int a , b;
    while (1){
        scanf("%d %d", &a, &b);
        
        if(a != 0 && b != 0){    
            printf("%d\n", a + b);
        }
        else{
            break;
        }
       
    }
}

int num_10951(){
    int a, b, i;

    while( scanf("%d %d",&a, &b) != EOF){
        printf("%d\n", a+b);
    }
    return 0;
}

int num_1110(){

    int value = 0;
    int originalValue = 0;
    int counter = 0;
    
    scanf("%d", &value);
    originalValue = value;

    while(1){
        
        //get number 26
        int temp_10th = value / 10; //2
        int temp_1st = value % 10;  //6
        int temp_new_1st = 0;
        // printf("%d %d\n", temp_10th, temp_1st);

        //calculate number
        
        value = temp_10th + temp_1st;
        if(value >= 10){
            temp_new_1st = value % 10; // 6
            value = (temp_1st * 10) + temp_new_1st ;
            // printf("value >= 10 : %d\n", value);
        }
        else{
            value = (temp_1st * 10) + value ;
            // printf("value : %d\n", value);
        }
        counter++;
        // printf("value : %d\n", value );
        if(value == originalValue){
            break;
        }
    }   
    printf("%d\n", counter);
}

int main(){
    // num_10952();
    // num_1110();
    num_10951();
}