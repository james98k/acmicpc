#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector <int> a(n);
    int b, c = 0;
    int temp = 0;

    std::cin>>n;
    for(int i = 0 ; i < n; i++){
        std::cin>>temp;
        a.push_back(temp);
        temp = 0;
    }

    




    return 0 ;
}