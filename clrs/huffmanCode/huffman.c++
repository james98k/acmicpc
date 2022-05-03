#include "header.h"
#include <string>
class node{
    public:
        int frequency;
        int binaryCode;
        int prefixCode;
        
        void setData(int value);
};

class HuffmanCode{
    public:
        string filename;
        string contentData;
        int letters;
        int bits;

        
        void printInfo();
        
};

int huffmanCode(int arr[]){
    int n = sizeof(arr);
    int q[n];

    // copy(arr, arr + n, q);

    node z;
    for(int i = 1; i < n-1; i++){   
        if(i == 0){
            // go left
        }   
        else
            // go right;

    }

    


    
    return 0;
}

void HuffmanCode::printInfo(){
    std::cout<<"Filename: "<<filename;
    std::cout<<contentData;
    std::cout<<"letters: "<<letters<<", bits: "<<bits;
    std::cout<<"-----------------------";
    std::cout<<"Huffman code table";
    std::cout<<"Chat.\tFreq.\tCode";
    // for();
    std::cout<<"-----------------------";
    std::cout<<"Encoding results: "; //after bits.cout 해서 결과 넣기
    // for() print the encoded bit string


}

string readFile(string filename){
    std::ifstream file(filename);
    std::string s;

    if (true == file.is_open()) {
        
        while (file) {
            getline(file, s);  
            std::cout << s << std::endl;
            
        }  
        file.close();
    } else {
        std::cout << "file open fail" << std::endl;
    }
    return s;
}