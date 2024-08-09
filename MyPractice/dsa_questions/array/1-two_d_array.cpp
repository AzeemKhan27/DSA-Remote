#include<iostream>
#include<vector>

using namespace std;

int main(){
    int row=5;
    int col=5;

    vector<vector<int> > arr2 (row,vector<int>(col,0));

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}