#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string readFile(string filename);


class node{
    public:
        int frequency;
        char alphabet;
        
        node(char alphabet, int frequency);
        node * left;
        node * right;

};

class qNode{
    public:
        node * n;
        qNode * next;
        qNode * prev;
        int index;
        qNode(node * n);
};

class HuffmanCode{
    public:
        string filename;
        string contentData;
        int letters;
        int bits;

        // node * buildHuffmanCode(PriorityQueue * pq);

        void printInfo();
        
};

class PriorityQueue{

    public:
        int qsize;
        
        qNode * front;
        qNode * rear;


        PriorityQueue();
        void enqueue(node * value);
        void maximum(int arr[]);
        void extract_max(int arr[]);
        
        int findNodeFromQueue(qNode * qn, char alphabet);
        void printQueue();
        


};