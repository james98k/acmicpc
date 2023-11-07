#include <iostream>
#include <vector>
using namespace std;

int main(){

    while(1){
        int a, b, c;

        std::cin>>a>>b>>c;
        if(a == 0 && b == 0 && c == 0) break;
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            std::cout<<"right"<<endl;
        }
        else
            std::cout<<"wrong"<<endl;

    }
}