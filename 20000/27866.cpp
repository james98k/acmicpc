#include <iostream>
using namespace std;

int main(){
    int maxLength = 1000;
    char arr[maxLength];
    int pos = 0;
    std::cin>>arr;
    std::cin>>pos;

    std::cout<<arr[pos-1];
}