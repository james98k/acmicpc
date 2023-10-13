#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> v;

    int target = 0;
    for(int i = 0; i < 10; i++){

        bool flag = false;
        std::cin>>target;
        target = target % 42;
    
        for(int i = 0; i < v.size(); i++){
            if(v[i] == target){
                flag = true;
                break;
            }
        }
        if(!flag){
            v.push_back(target);
        }   
    }
    std::cout<<v.size();
}