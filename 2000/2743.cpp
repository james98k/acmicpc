#include <iostream>
using namespace std;

int getLength(const char * arr){
    int length = 0;

    while(1){
        if(arr[length] == '\0'){
            break;
        }
        else{
            length++;
        }
    }

    return length;
}

int main(){

    int maxLength = 102;
    char arr[maxLength];

    std::cin>>arr;

    int value = getLength(arr);

    std::cout<<value;    

}