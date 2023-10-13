#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> v(8);
    int temp = 0;

    for(int i = 0; i < 8; i++){
        std::cin>>v[i];
    }

    bool asc = true;
    bool desc = true;

    for(int i = 1; i < 8; i++){
        if(v[i] > v[i-1]){
            desc = false;
        }
        else if(v[i] < v[i-1]){
            asc = false;
        }
    }
    if(asc){
        std::cout<<"ascending";
    }
    else if(desc){
        cout<<"descending";
    }
    else{
        cout<<"mixed";
    }
}