#include "header.h"
#include <string>

node::node(int frequency, char alphabet){
    this->frequency = frequency;
    this->alphabet = alphabet;
};

qNode::qNode(node * n){
    this->n = n;
    this->prev = NULL;
    this->next = NULL;

};


PriorityQueue::PriorityQueue(){
    this->front = NULL;
    this->rear = NULL;
    this->qsize = 0;
}

void PriorityQueue::enqueue(node * value){
   qNode * node = new qNode(value);
   if(this->front == NULL){
       this->front = node;
       this->rear = node;
   }
    //같은 alphabet 값 front에 있는 경우
   else if(this->front->n->alphabet == value->alphabet){
       this->front->n->frequency++;
       
    // check tree structure ?
       
       node->prev = this->rear; // inserting new node to rear
       this->rear->next = node; // existring rear -> connecting new node
       this->rear = node;



   }

   else{ //
       qNode * temp = this->front;

   }
}
qNode * PriorityQueue::findNodeFromQueue(node * value){

}

void PriorityQueue::extract_max(int arr[]){
    
}


void PriorityQueue::findNodeFromQueue(char alphabet){
    if(this->front->n->alphabet != alphabet){
        
    }
}
void PriorityQueue::increase_key(char alphabet){
    // node * findNodeFromQueue(alphabet);
    
    qNode * node = new qNode(n);

}

HuffmanCode::HuffmanCode()
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


