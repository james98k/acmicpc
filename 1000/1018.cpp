#include <iostream>
#include <vector>

using namespace std;

string W_Board[] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };

string B_Board[] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };

string board[3000];

int check(int i, int j){

    int w_board_count = 0;
    int b_board_count = 0;

    for(int di = 0 ; di < 8; di++){
        for(int dj = 0; dj < 8; dj++){
            
            int ni = i + di;
            int nj = j + dj;

            if(board[ni][nj] != W_Board[di][dj])
                w_board_count++;
            if(board[ni][nj] != B_Board[di][dj])
                b_board_count++;
        }
    }
    

    return min(w_board_count, b_board_count);
}

int main(){
    
    int m, n; 
    int result = 100000;
    std::cin>>m>>n;

    for(int i = 0; i < m; i++){
        std::cin>>board[i];
    }

    for(int i = 0; i < m-7; i++){
        for(int j = 0 ; j < n-7; j++){
            result = min(result, check(i, j));
        }
    }
    
    
    std::cout<<result;
    

}