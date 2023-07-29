#include <iostream>
#include <string>

using namespace std;


int main(){

    string str; 
    getline(cin, str);

    int length = str.length();
    int count = 0;
    
    if(length == 1 && str[0] == ' '){
        std::cout<<0;
        return 0;
    }

    for(int i = 0; i < length; i++){

        if(str[i] == ' '){
            if(i == 0 || i == length-1){
                continue;
            }
            else{
                count++;
            }   
        }
    }

    std::cout<<count+1;

}