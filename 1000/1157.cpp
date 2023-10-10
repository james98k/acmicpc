#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Node{
    public:
    int  count;
    char  value;
    Node(char v, int c){
        count = c;
        value = v;
    }
    void addCount(){
        count++;
    }
}; 

int main(){

    string input = "";
    std::cin>>input;

    vector<Node> v;


    for(int i = 0 ; i < input.length(); i++){
        bool hasChar = false;
        char targetChar = toupper(input[i]);

        //1. 비어있는 벡터
        if(v.size() == 0){
            v.push_back(Node(targetChar, 1));
            continue;
        }
        //2. 같은 값을 찾을 경우 ++
        for(auto &node : v){
            if(node.value == targetChar){
                node.addCount();
                hasChar = true;
                break;
            }
        }
        //3. 없는 값을 경우 push back
        if(!hasChar){
            v.push_back(Node(targetChar, 1));
        }
    }

    Node temp = Node(' ', 0);
    bool flag = false;

    for(auto node : v){
        if(node.count == temp.count)
            flag = true;
        
        else if(node.count > temp.count){
            temp = node;    
            flag = false;
        }
    }

    if(flag) std::cout<<"?";
    else std::cout<<temp.value;
    
}