#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char * s, int l, int r, int * count){
	*count += 1;
	
    if(l >= r) 
		return 1;
	
    else if(s[l] != s[r]) 
		return 0;
	
    else 
		return recursion(s, l+1, r-1, count);
		
}


int isPalindrome(const char * s, int * count){
	return recursion(s, 0, strlen(s)-1, count);
}

int main(){
	
	int loopCount = 0;
	std::cin>>loopCount;
	
	int num = 0;
	int * recurrCount;
	recurrCount = &num;
	
	
	
	for(int i = 0; i < loopCount; i++){
		
		char strInputArr[1001];
		char * inputString = strInputArr;
		std::cin>>inputString;
	
		
		int palindromeStatus = isPalindrome(inputString, recurrCount);
		
		std::cout<<palindromeStatus<<" "<<*recurrCount<<endl;
		
		*recurrCount = 0;
		
	}
}