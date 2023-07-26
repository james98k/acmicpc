#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int a = 10;
    std::cin>>a;

    char str[a][1024];
    int sizeList[3];
    for(int i = 0; i < a; i++){
        std::cin>>str[i];
    }

    for(int i = 0; i < a; i++){
        std::cout<<str[i][0]<<str[i][strlen(str[i]) -1]<<endl;
    }
    return 0;
}