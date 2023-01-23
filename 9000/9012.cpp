#include <iostream>
#include <vector>

using namespace std;

int main(){

	int inputCount = 0;
	
	std::cin>>inputCount;
	
	std::vector<char> stack;
	std::string results[inputCount];
	
	for(int i = 0; i < inputCount; i++){
		
	}
	
	
	for(int i = 0; i < inputCount; i++){
		results[i] = "YES";
		
		std::string inputString = "";
		std::cin>>inputString;
		
		for(int j = 0; j < inputString.length(); j++){
			if(inputString[j] == '('){
				stack.push_back(inputString[j]);
			}
			else{
				if(!stack.empty() && inputString[j] == ')'){
					stack.pop_back();
				}
				else{
					results[i] = "NO";
					break;
				}
				
			}
		}
		if(!stack.empty()){
			results[i] = "NO";
			stack.clear();
		}
	}
	
	for(int i = 0; i < inputCount; i++){
		std::cout<<results[i]<<endl;
	}
	
	return 0;
}