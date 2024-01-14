#include <iostream>
#include <vector>

using namespace std;

int main(){

    while(1){
        int input = 10000;
        bool status = true;

        std::cin>>input;
        if(input == 0)
            break;    

        vector<int>stack;

        while(input != 0){
            stack.push_back(input % 10);
            input = input / 10;
        }
        
        for(int i = 0; i < stack.size() / 2; i++){
            if(stack[i] != stack[stack.size()-i-1])
                status = false;
        }
        
        if(status)
            std::cout<<"yes";
        else
            std::cout<<"no";
        }
    
}