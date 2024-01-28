#include <iostream>
#include <vector>
using namespace std;

int main(){
    float count, m = 0, temp = 0, sum = 0;

    std::cin>>count;
    vector<float> v(count);

    for(int i = 0; i < count; i++){
        std::cin>>temp;
        if(temp > m){
            m = temp;
        }
       v[i] = temp;
    }

    for(int i = 0; i < count; i++){
        v[i] = v[i] / m * 100;
        sum += v[i];
    }
    std::cout<<sum / count;
}