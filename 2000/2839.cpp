//type : greedy algorithm
#include <iostream>

using namespace std;

int main(){
    
    int n, a, b, temp;

    std::cin>>n;

    //a : 5kg 가 가능한 횟수
    a = n / 5;
    b = n;
    
    while(1){
        if(a < 0){
            std::cout<<"-1";
            return 0 ;
        }
        if((n - (5 * a)) % 3 == 0){
            b = (n-(5 * a)) / 3;
            break;
        }
        a--;
    }
    std::cout<<a + b;
  
}




