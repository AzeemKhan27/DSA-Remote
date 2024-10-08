#include<iostream>
#include<climits>
#include<vector>

using namespace std;

   int board[9][9]={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0},                     
   };

bool isSafe(int val, int curr_row, int curr_col){
    
    //check row before insert the element.
    for(int col=0; col<9; col++){
        if(board[curr_row][col] == val){
            return false;
        }
    }

    //check column before insert the element.
    for(int row=0; row<9; row++){
        if(board[row][curr_col] == val){
            return false;
        }
    }

    //check element in 3x3 box. 
    for(int i=0; i<9; i++){
        if(board[3*(curr_row/3) + (i/3)][3*(curr_col/3) + (i%3)] == val){
            return false;
        }
    }

    return true;    
}

bool sudoku_solver(int n){    //this function returns true or false depending on the solution founded or not.

   cout<<"Count Function Calling ";

   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        //check for empty cells
        if(board[i][j] == 0){
            for(int val=1; val<=9; val++){  

                //check if value is safe to insert into board? //Safety Check
                if(isSafe(val,i,j)){

                    //insert
                    board[i][j] = val;

                    //baaki recursion sambhaal lega
                    bool getSolutionForNext = sudoku_solver(board,n);
                    if(getSolutionForNext == true)
                        return true;

                    //backtracking
                    board[i][j] = 0;

                }
            }
        }
        return false;
     }
  }    
    return true;
}

int main(){
    // 0-> represents an empty cell 

   int n = 9;

   sudoku_solver(n);
     cout<<"Printing the solution : "<<endl;
     
     for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<board[i][j] <<" ";
        }
        cout<<endl;
     }
   return 0;
}