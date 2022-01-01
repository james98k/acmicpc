#include <iostream>
using namespace std;

class node
{
    int number;
};

class stack
{

public:
    node stack[];
    void createStack(int stackSize);
    int top();
    int size();
    int isEmpty();
    int isFull();
};
void stack::createStack(int stackSize)
{
    stack[stackSize];
}

int main()
{

    int stackSize;
    std::cin >> stackSize;
    stack s1[stackSize];
}