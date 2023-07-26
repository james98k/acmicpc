#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// 여기까지는 생성자 완료. 
//self number 구하는 방법만 찾으면 해결. 
int main(){
    
    int a = 1;
    int i = 0;
    int sum = a;
    
    while(sum < 100){
        sum += a / 10;
        sum += a % 10;
        a = sum;

        std::cout<<sum<<endl;
    }


}