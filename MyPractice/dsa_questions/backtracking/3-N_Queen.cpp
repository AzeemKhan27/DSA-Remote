#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void printSolution(vector<vector<char> > &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; i<n; j++){
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


bool isSafe(int row, int col, vector<vector<char>> &board, int n){
   //check karna h, kya mai current cell [row, col] par Queen rakh skta hoon?

   int i=row;
   int j=col;

   //check row;
   while(j >= 0){
    // if(board[i][j] == 1){
    if(board[i][j] == 'Q'){
        return false;
    }
    j--;
   }

   //check upper left diagonal
   i = row;
   j = col;

   while(i>=0 && j>=0){
    // if(board[i][j] == 1){
    if(board[i][j] == 'Q'){
        return false;
    }
    i--;
    j--;
   }

   //check bottom left diagonal

   i = row; 
   j = col;
   while(i<n && j>=0){
    // if(board[i][j] == 1){
    if(board[i][j] == 'Q'){
        return false;
    }
    i++;
    j--;
   }

   // agar queen nahi mili, it means ye position is safe, and return krdo "TRUE"

   return true;
 
}

void solve(vector<vector<char> > &board, int col, int n){
    //base case

    if(col >= n){                // if Queen >= columns and placed on board
        printSolution(board, col);
        return;
    }

    // 1 case solve karna hai, baaki recursion sambhal lega.

    for(int row=0; row<n; row++){
        if(isSafe(row,col,board,n)){
            //rakh do
            //board[row][col] = 1;       //1 -> Queen at this cell
            board[row][col] = 'Q';     
            //recursion sambhal lega
            solve(board, col+1, n);
            //backtracking
            // board[row][col] = 0;      //0 -> Empty cell
            board[row][col] = '-';
        }
    }
}

int main(){
    int n = 4;
    vector<vector<char> > board(n, vector<char>(n,'-'));
    int col = 0;
    //0 -> Empty cell
    //1 -> Queen at this cell
    solve(board, col, n);

    return 0;
}

