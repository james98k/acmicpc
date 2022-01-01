#include <stdio.h>

int num_14681(){
    
    int x, y;
    scanf("%d %d",&x, &y);

    if(x >= 0 && y >= 0){
        printf("1");
    }
    else if(x <= 0 && y >= 0){
        printf("2");
    }
    else if( x <= 0 && y <= 0){
        printf("3");
    }
    else{
        printf("4");
    }
}


int num_2884(){
    int h, m;
    scanf("%d %d", &h, &m);

    if( h == 0 && m < 45){
        
        h += 23;
        m += 15;
        // m += 60;
        // m -= 45;
    }
    else if( h > 0 && m < 45){
        h -= 1;
        m += 15;
    }
    else{
        m -= 45;
    }
    printf("%d %d", h, m);
}
int main(){
//    num_14681();
    num_2884();
}