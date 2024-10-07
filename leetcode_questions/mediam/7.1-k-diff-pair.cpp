#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int binary_search(const vector<int>&nums, int start, int end, int x){
    

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == x){
            return mid;
        }
        else if(nums[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;  // Element not found in the array.
}

// using two points
int findPairs(vector<int>& nums, int k) {
   sort(nums.begin(), nums.end());
   set<pair<int,int>>ans;
   
   for(int i=0; i<nums.size(); i++){
        if(binary_search(nums, i+1, nums.size() - 1, nums[i]+k) != -1){
            ans.insert({nums[i], nums[i]+k});
        }
   }
   return ans.size();
}


int main(){
    int n;
    cin>>n;
    int k=2;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"findPairs is = "<<findPairs(arr,k)<<" ";
    return 0;
}