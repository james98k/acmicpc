#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> stack;
	
	int loopCount = 0;
	std::cin>>loopCount;
	
	for(int i = 0 ; i < loopCount ; i++){
		string type = "";
		
		std::cin>>type;
		
		if(type == "push"){
			int pushValue = 0;
			std::cin>>pushValue;
			stack.push_back(pushValue);
		}
		
		else if(type == "pop"){
			if(stack.size() == 0){
				std::cout<<-1<<endl;
				}
			else{
				int popValue;
				popValue = stack.back();
				stack.pop_back();
				std::cout<<popValue<<endl;
			}
		}
		else if(type == "top"){
			if(stack.size() > 0)
				std::cout<<stack.back()<<endl;
			else
				std::cout<<-1<<endl;
		}
	
		else if(type == "size"){
			std::cout<<stack.size()<<endl;
		}
		
		else{
			if(stack.size() == 0)
					std::cout<<1<<endl;
				else
					std::cout<<0<<endl;
		}
		
		
	}
	
}
