class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char value){
        int n = board.size();

        for(int i = 0; i < n; i++){
            // Row check
            if(board[row][i] == value){ 
                return false;
            }

            // Column check
            if(board[i][col] == value){
                return false;
            }

            // 3x3 box check
            if(board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value){
                return false;
            }
        }
        
        // If no conflicts are found, it's safe to place the value
        return true;
    }

   bool sudoku_solve(vector<vector<char>>& board){
        int n = board.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == '.'){
                    // Try to fill with value ranging from 1-9
                    for(char val = '1'; val <= '9'; val++){
                        // Check for safety
                        if(isSafe(i, j, board, val)){
                            // If insertion is safe, then insert it
                            board[i][j] = val;

                            // Recursion will handle the rest
                            bool remainingBoardSolution = sudoku_solve(board);
                            if(remainingBoardSolution){
                                return true;
                            } else {
                                // Backtracking
                                board[i][j] = '.';
                            }
                        }
                    }
                    // If no value from 1 to 9 is valid, return false to backtrack
                    return false;
                }
            }   
        }
        // All cells are filled, so the Sudoku is solved
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        sudoku_solve(board);
    }
};