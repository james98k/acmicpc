#include <stdio.h>

int num_10818(){
    int initial_num;
    long biggest_num, smallest_num;
    scanf("%d", &initial_num);

    int array[initial_num];

    for(int i = 0 ; i < initial_num; i++){
       scanf("%d", &array[i]);

        if( i == 0){
        biggest_num = array[i];
        smallest_num = array[i];
        continue;
       }

        if(i != 0 && array[i]>= biggest_num){
            biggest_num = array[i];
        }
        if(i != 0 && array[i] <= smallest_num){
            smallest_num = array[i];
        }
    }
    printf("%d %d", biggest_num, smallest_num);
}


int main(){
    // 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
    // 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

    // 출력
    // 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

    num_10818();
}

