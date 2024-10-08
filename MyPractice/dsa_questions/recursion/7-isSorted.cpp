#include<iostream>
#include<climits>
#include<vector>

using namespace std;

bool checkSorted(vector<int> &arr, int &n, int i){
    //base case
    if(i == n-1 ) return true;
    //1 case solve krna hai
    if(arr[i+1] < arr[i]) return false;
    //baaki recursion solve krega
    return checkSorted(arr, n, i+1);
}

int main(){
    vector<int> v{1,1,1,2};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v, n, i);

    if(isSorted) {
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}

