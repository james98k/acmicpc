#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n;
    vector<int> size;
    int t, p;
    int count = 0;

    std::cin>>n;
    for(int i = 0; i < 6; i++){
        int temp = 0;
        std::cin>>temp;
        size.push_back(temp);
    }
    std::cin>>t>>p;

    for(int i = 0; i < 6; i++){
        if(size[i] > t){
            if(size[i] % t > 0){
                count += size[i] / t + 1;
            }
            else{
                count += size[i] / t;
            }   
        }
        else if(size[i] == 0){
            continue;
        }
        else{
            count++;
        }
    }
    std::cout<<count<<endl;
    std::cout<<n / p<<" "<<n % p ;


}