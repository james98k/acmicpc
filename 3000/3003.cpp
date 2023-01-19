#include <iostream>
using namespace std;


int main(){
	int expectedChessCountPerPices[6] = {1, 1, 2, 2, 2, 8};
	
	for(int i = 0; i < 6; i++){
		int inputPieceValue = 0;
		std::cin>>inputPieceValue;
		
		inputPieceValue = expectedChessCountPerPices[i] - inputPieceValue ;
	
		std::cout<<inputPieceValue<<" ";
	}
}