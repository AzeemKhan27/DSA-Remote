#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For reverse function
#include <set>

using namespace std;

vector<int>twoPtrMethod(const vector<int>&arr, int k, int x){
    vector<int> ans;
    int low=0, high=arr.size()-1;

    while(high - low >= k){
        if(x - arr[low] > arr[high] - x){
            low++;
        }
        else{
            high--;
        }
    }
    // vector<int>ans;
    // for(int i=low; i<=high; i++){
    //     ans.push_back(arr[i]);
    // }
    // return ans;

    // OR USING STL function Like below code:

    return vector<int>(arr.begin()+low, arr.begin(+high+1)); //using STL 
}

vector<int> findClosest(vector<int>& arr, int k, int x){
    return twoPtrMethod(arr, k, x);
}

int main(){
    int x = 35;  // find closest from 35.
    int k = 4;  // numbers of neighbors elements
    vector<int> arr = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    vector<int>result = findClosest(arr, k, x);
    
    for(int num : result){
        cout<<num<<" "; 
    }
    cout<<endl;
    return 0;
}

