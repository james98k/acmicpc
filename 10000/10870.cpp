#include <iostream>

using namespace std;

int fibonachi(int num){
	if(num <= 1){
		return num;
	}
	else 
		return  fibonachi(num - 1) + fibonachi(num - 2);
}

int main(){
	
	int num = 0;
	std::cin>>num;
	int result = fibonachi(num);
	
	std::cout<<result;
	
}