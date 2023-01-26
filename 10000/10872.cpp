#include <iostream>

using namespace std;

int factorial(int value){
	
	if(value > 1)
		return value * factorial(value -1);
	else
		return 1;
}

int main(){
	int input = 0 ;
	
	std::cin>>input;
	
	int result = factorial(input);
	
	std::cout<<result<<endl;
	
}