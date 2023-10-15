#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int count = 0;
    std::cin>>count;

    for(int i = 0; i < count; i++){
        int h,w,n;
        std::cin>>h>>w>>n;

        int a,b;

        //height
        a = n % h;
        //width 
        b = n / h + 1;

        if(a == 0){
            a = h;
            b -= 1;
        }
        std::cout<<a<<std::setw(2)<<std::setfill('0')<<b;
        
       
    }
}