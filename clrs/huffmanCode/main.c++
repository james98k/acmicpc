#include "header.h"

int main(){

    // readfile
    string s = readFile("input_sample.txt");
    std::cout<<s<<"\n";
    int s_length = s.length();

    char charValue[s_length];
    std::strcpy(charValue, s.c_str());

    PriorityQueue * pq = new PriorityQueue;

    for(int i = 0 ; i < s_length; i++){
        node * n = new node(charValue[i], 1);
        pq->enqueue(n);

        // std::cout<<"value : "<<charValue[i]<<"\n";
    }

    pq->printQueue();




    

    

    






}