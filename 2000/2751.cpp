#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &list, int start, int end){
    

}


void quickSort(vector<int> &list, int start, int end) {
    int pivot = start;
    int i = start + 1;
    int j = end;

    while(list[i] > pivot){

    }

}

int main(){

    int a;
    std::cin>>a;
    vector<int> list(a);

    for(int i = 0; i < a; i++){
        std::cin>>list[i];
    }

    std::cout<<list[0];

    quickSort(list, 0, list.size()-1);

}