#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, c;

    std::cin>>a>>b>>c;
    
    std::cout<<stoi(a)+ stoi(b) - stoi(c) <<endl;
    a += b;
    std::cout<<stoi(a) - stoi(c)<<endl;
}