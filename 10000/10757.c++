#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        std::cout<<v.at(i);
    }
}

int main(){

    //문제 : long long 사이즈를 넘어서는 값을 계산해야됨. 
    //-> string 으로 해결하려고 했지만? string 을 쓸 바에는 vector 를 사용하는 방법은? 
    //vector 를 사용할때 문제는 무엇인가? 
    //

    std::cout<<"start"<<endl;
    vector<int> a, b;


    int temp;
    int count = 0;
    while(std::cin>>temp){
        std::cout<<temp;
        a.push_back(temp);
        std::cout<<count;
        count++;
        
    }

    temp = 0;
    // while(std::cin>>temp){
    //     b.push_back(temp);
    // }
std::cout<<"end"<<endl;
    // printVector(a);
    // printVector(b);

    
    return 0;
}

// 9223372036854775807 9223372036854775808