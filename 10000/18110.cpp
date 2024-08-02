#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    int a, level = 0;
    int temp = 0 ;
    std::cin>>a;
    deque <int> input;
    
    //input & sort
    for(int i = 0 ; i < a; i++){
        std::cin>>temp;
        input.push_back(temp);
    }
    sort(input.begin(), input.end());
    
    //print sort
    // for(auto i : input){
    //     std::cout<<i<<' ';
    // }

    //handle 15% of front & end
    int rnd = round(a * 0.15);
    // std::cout<<rnd;;

    for(int i = 0; i < rnd; i++){
        input.erase(input.begin());
        input.erase(input.end());
    }

    for(int i = 0; i < input.size(); i++){
        level += input[i];
    }
    // std::cout<<level / 3;
    
    // level = round(level / input.size());
    // double levD = level / input.size();
    // std::cout<<levD;

    if (!input.empty()) {
        double average = static_cast<double>(level) / input.size();
        std::cout << round(average);
    } else {
        std::cout << 0;  // Handle case where no elements are left
    }



}