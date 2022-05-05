#include "header.h"
#include <string>

node::node(char alphabet, int frequency){
    this->alphabet = alphabet;
    this->frequency = frequency;

    this->left = NULL;
    this->right = NULL;
    // std::cout<<": "<<this->alphabet<<"\n";
}

qNode::qNode(node * n){
    this->n = n;
    this->next = NULL;
    this->prev == NULL;
}

PriorityQueue::PriorityQueue(){
    qsize = 1;
    this->front = NULL;
    this->rear = NULL;
}

void PriorityQueue::enqueue(node * n){

    qNode * qn = new qNode(n);
    qn->n = n;

    // 빈 queue 일 경우
    if(this->front == NULL){
        this->front = qn;
        this->rear = qn;
        std::cout<<"null to new value "<<qn->n->alphabet<<"\n";
        this->qsize += 1;
    }

    //비어있지 않은 경우, -> 같은 alphabet 을 가진 값을 찾아야함
    else{
        // 1. search value of n in the q
            qNode * temp = this->front;
            if(findNodeFromQueue(temp, qn->n->alphabet) == 1){
            
                return;
            }
        // 2. if the value is not in the queue insert to rear
        // if front > qn, 
            else if(this->front->n->frequency >= qn->n->frequency){
                std::cout<<"no match inserting node to rear"<<qn->n->alphabet<<"\n";
                qn->next = this->front;
                this->front->prev = qn;
                this->front = qn;
                this->qsize += 1;
                return;
            }

            else if(this->rear->n->frequency <= qn->n->frequency){
                qn->prev = this->rear;
                this->rear->next = qn;
                this->rear = qn;
                qn->next = NULL;
                this->qsize += 1;
                return;
            }

            else{
                qNode * temp = this->front;

                while(temp->n->frequency < qn->n->frequency){
                    temp = temp->next;
                }

                qn->next = temp;
                qn->prev = temp->prev;
                temp->prev = qn;
                if(qn->prev != NULL){
                    qn->prev->next = qn;
                }
                this->qsize += 1;
                return;

            }
        // 3. max-heapify the frequency of the count
    }
    

}
// insert value
int PriorityQueue::findNodeFromQueue(qNode * qn, char alphabet){
    std::cout<<"c-n"<<this->front->n->alphabet<<": qn-n"<<qn->n->alphabet<<"\n";

    while(qn->next != NULL){
        if(qn->n->alphabet == alphabet){
            qn->n->frequency++;
            std::cout<<qn->n->alphabet<<"'s frequency is updated to "<< qn->n->frequency<<"\n";
            std::cout<<"index : "<<this->qsize<<"\n";
            // if(qn->prev->n->frequency > qn->n->frequency){
            //     qNode * temp = qn->prev;
            //     //할일
            //     // freq 값이 업데이트 된 이후 자리 swap -> child parent 값을 swap 시켜야함. 
            //     qn->prev = qn;
            //     qn->next = temp;




            // }

            return 1;
            
            
        }
        else{
            qn = qn->next;
        }
    }
    return 0;
}

void PriorityQueue::printQueue(){
    qNode * qn = this->front;

    while(qn != NULL){
        std::cout<<qn->n->alphabet<<" : "<<qn->n->frequency<<"\n";
        qn = qn->next;
    }
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