#include <iostream>
#include <array>
#include <cstring>

using namespace std;

int recursion(const char * s, int l, int r, int * count){
	*count += 1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, count);	
}


int isPalindrome(const char * s, int * count){
	return recursion(s, 0, strlen(s)-1, count);
}

int main(){
	
	int loopCount = 0;
	
	int * recurrCount;
	int num = 0;
	recurrCount = &num;
	std::cin>>loopCount;
	
	for(int i = 0; i < loopCount; i++){
		// std::array<char, 1000> inputString;
		char * inputString;
		
		std::cin>>inputString;
		// std::cout<<inputString;
		// printf("%s", inputString);
	
		
		int palindromeStatus = recursion(inputString, 0, strlen(inputString)-1, recurrCount);
		
		std::cout<<palindromeStatus<<" "<<*recurrCount<<endl;
		
		*recurrCount = 0;
		
		// inputString[0] = {0,};
	}
}