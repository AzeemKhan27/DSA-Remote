#include<iostream>
#include<vector>

using namespace std;


    vector<int> spiralOrder(vector<vector<int>>& matrix){
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;

        int startingRow = 0;
        int endingCol = m-1;
        int endingRow = n-1;
        int startingCol = 0;
        int count = 0;

        while(count < total_elements){
            //print starting row
            for(int i=startingCol; i<=endingCol && count < total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow += 1;

            //print ending column
            for(int i=startingRow; i<=endingRow && count<total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //print ending row
            for(int i=endingCol; i>=startingCol && count<total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //print starting column
            for(int i = endingRow; i >= startingRow && count < total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol += 1;
        }

        return ans;
    }



void print_ele_spiral(vector<vector<int>>& matrix){
    vector<int> result = spiralOrder(matrix);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print_ele_spiral(matrix);

    return 0;
}