#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string a = "";
    std::cin>>a;
    vector<int> v;

    //a = bae -> 1, 0, -1, -1, 2, 
    int len = a.length();
    int b = 97;
    for(int i = 0; i < 26; i++){

        for(int j = 0 ; j < len; j++){
            //if (a == string[j])
            if((b + i) == (int)a[j]){
                v.push_back(j);
                break;
            }
            else if(j == len-1)
                v.push_back(-1);
        }
    }
    for(int i = 0 ; i < 26; i++){
        std::cout<<v[i]<<" ";
    }
}