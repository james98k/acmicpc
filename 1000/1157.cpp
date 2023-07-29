#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int max;
    string str;
    getline(cin, str);
    
    vector<int> count(str.length(), 0);
    

    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < str.length(); j++){
            if(str[i] == str[j]){
                count[i]++;

            }
        }
        if(str[i] > str[i-1]){
            max = i;
        }
    }

    std::cout<<max;
    std::cout<<str[max-1];
    return 0;
}