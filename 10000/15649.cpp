#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a,b;
	
	std::cin>>a>>b;
	
	for(int i = 1; i <= a; i++){
		
		if(b > 1){
			
			for(int j = 1; j <= a; j++){
				std::cout<<i;
				for(int k = 1; k < b; k++){
					if(j == i){
						k++;
						continue;
					}
					else{
						std::cout<<" "<<j;
					}
					
				}
				std::cout<<endl;
			}
		}
		//print one line
		else{
			std::cout<<i<<endl;
		}
		
	}
	return 0;
}

// 1. a, b 입력 받는다
// 	a = 행 b = 열
	
// 2. for 