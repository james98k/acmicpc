#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m,n;
    int sum, min;
    std::cin>>m>>n;

    int temp = 0;
    for(int i = m; i <= n; i++){
        temp = sqrt(i);
        std::cout<<temp<<endl;
    }
}


