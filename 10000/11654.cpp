#include <iostream>
#include <cstring>
using namespace std;

int main(){ 

    char a;
    std::cin>>a;
    char ch(a);
    std::cout<<static_cast<int>(ch)<<endl;
    return 0;
}