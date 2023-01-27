#include <iostream>

using namespace std;

int recursion(string s, int l, int r, int * count){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else {
		*count += 1;
		return recursion(s, l+1, r-1, count);	
	}
}


int isPalindrome(string s, int * count){
	return recursion(s, 0, s.length()-1, count);
}

int main(){
	
	int loopCount = 0;
	
	int * recurrCount;
	int num = 0;
	recurrCount = &num;
	std::cin>>loopCount;
	
	for(int i = 0; i < loopCount; i++){
		string inputString;
		
		std::cin>>inputString;
		
		int palindromeStatus = recursion(inputString, 0, inputString.length()-1, recurrCount);
		
		std::cout<<palindromeStatus<<" "<<recurrCount;
		
	}
}