#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int a = 0;
    std::cin>>a;
    
    char str[a];
    int sum = 0;

    for(int i = 0; i < a ; i++){
        std::cin>>str[i];

        sum += str[i] - '0';
    }
    std::cout<<sum;
}