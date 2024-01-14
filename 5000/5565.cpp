#include <iostream>


int main(){
    int sum = 0;
    int temp = 0;
    std::cin>>sum;
    
    for(int i = 0; i < 9; i++){
        std::cin>>temp;
        sum = sum - temp;
    }
    std::cout<<sum;

}