#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

// using two points
int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;
    while (j < nums.size()) {
        int diff = nums[j] - nums[i];
        if (diff == k) {
            ans.insert({nums[i], nums[j]});
            ++i;
            ++j;
        }
        else if (diff > k) {
            ++i;
        }
        else {
            ++j;
        }
        if (j == i) ++j;
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