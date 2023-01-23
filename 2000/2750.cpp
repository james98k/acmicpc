#include <iostream>

using namespace std;

int main(){
	int inputCount = 0;
	std::cin>>inputCount;
	
	int sort[inputCount];
	
	for(int i = 0 ; i < inputCount; i++){
		std::cin>>sort[i];
	}
	
	for(int i = 0; i < inputCount; i++ ){
		
		for(int j = 0; j < inputCount-1; j++){
			
			if(sort[j] > sort[j+1]){
				swap(sort[j], sort[j+1]);
				// std::cout<<"sorted"<<endl;
			}
		}
	}
	
	for(int i = 0; i < inputCount; i++){
		std::cout<<sort[i]<<endl;
	}
}