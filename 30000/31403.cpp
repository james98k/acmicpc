#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, c;

    std::cin>>a>>b>>c;



    std::cout<<stoi(a)+ stoi(b) - stoi(c) <<endl;

    //문자열 설정 -> 10 단위의 수가 나왔을때는 문제해결이 안됨. 
    a += b;

    std::cout<<stoi(a) - stoi(c)<<endl;

    

    



}