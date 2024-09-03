#include<iostream>
#include<climits>
#include<vector>
#include<unordered_map>

using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagonalCheck;
unordered_map<int,bool> bottomLeftDiagonalCheck;



void printSolution(vector<vector<char> > &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n){

// Using with Map data structure:

 if(rowCheck[row] == true)
   return false;
 if(upperLeftDiagonalCheck[n-1+col-row])
   return false;
 if(bottomLeftDiagonalCheck[col+row])
   return false;

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
            board[row][col] = 'Q';   
            rowCheck[row] = true; 
            upperLeftDiagonalCheck[n-1+col-row] = true;
            bottomLeftDiagonalCheck[row+col] = true;

            //recursion sambhal lega
            solve(board, col+1, n);

            //backtracking
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] = false;
            bottomLeftDiagonalCheck[row+col] = false;
        }
    }
}

int main(){
    int n = 4;
    vector<vector<char> > board(n, vector<char>(n,'-'));
    vector<vector<string> > ans;
    int col = 0;
    solve(board, col, n);

    return 0;
}



// Leetcode Solution :

// class Solution {
// public:

//     unordered_map<int,bool> rowCheck;
//     unordered_map<int,bool> upperLeftDiagonalCheck;
//     unordered_map<int,bool> bottomLeftDiagonalCheck;

// void storeSolution(vector<vector<char> > &board, int n, vector<vector<string> > &ans ){

//     vector<string> temp;
//     for(int i=0; i<n; i++){
//         string output = "";
//         for(int j=0; j<n; j++){
//             output.push_back(board[i][j]);
//         }
//         temp.push_back(output);
//     }
//     ans.push_back(temp);
// }

// bool isSafe(int row, int col, vector<vector<char>> &board, int n){

//         // Using with Map data structure:

//         if(rowCheck[row])
//           return false;
//         if(upperLeftDiagonalCheck[n-1+col-row])
//          return false;
//         if(bottomLeftDiagonalCheck[col+row])
//          return false;

//         return true;
// }

//     void solve(vector<vector<char> > &board, int col, int n,vector<vector<string>> &ans){
    
//     //base case
//     if(col >= n){   // if Queen >= columns and placed on board
//         storeSolution(board, n, ans);
//         return;
//     }

//     // 1 case solve karna hai, baaki recursion sambhal lega.

//     for(int row=0; row<n; row++){
//         if(isSafe(row,col,board,n)){

//             //rakh do
//             board[row][col] = 'Q';   
//             rowCheck[row] = true; 
//             upperLeftDiagonalCheck[n-1+col-row] = true;
//             bottomLeftDiagonalCheck[row+col] = true;

//             //recursion sambhal lega
//             solve(board, col+1, n, ans);

//             //backtracking
//             board[row][col] = '.';
//             rowCheck[row] = false;
//             upperLeftDiagonalCheck[n-1+col-row] = false;
//             bottomLeftDiagonalCheck[row+col] = false;
//         }
//     }
// }

//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<char> > board(n, vector<char>(n,'.'));
//         vector<vector<string>> ans;
//         int col = 0;
    
//         solve(board, col, n, ans);
//         return ans;
//     }
// };