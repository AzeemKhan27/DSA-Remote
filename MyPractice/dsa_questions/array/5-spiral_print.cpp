#include<iostream>
using namespace std;

int print_element_spiral(vector<vector<int>>& matrix){
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;

        int startingRow = 0;
        int endingCol = n-1;
        int endingRow = m-1;
        int startingCol = 0;

        int count = 0;
        while(count < total_elements){
            //print starting 
            for(int i=startingCol; i<=endingCol && count<total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count+=1;
            }
            startingRow += 1;

            //print ending col
            for(int i=startingRow; i<=endingRow && count<total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
                count+=1;
            }
            endingCol -= 1;

            //print ending row
            for(int i=endingCol; i>=startingCol && count<total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
                count+=1;
            }
            endingRow -= 1;

            //print starting col
            for(int i=endingRow; i>=startingRow && count<total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                count+=1;
            }
            startingCol += 1;
        }
        return ans;
    }
};
    
// Function to print the elements in spiral order
void print_element_spiral(vector<vector<int>>& matrix) {
    vector<int> result = spiralOrder(matrix); // Get the spiral order

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the function to print elements in spiral order
    print_element_spiral(matrix);

    return 0;   
}