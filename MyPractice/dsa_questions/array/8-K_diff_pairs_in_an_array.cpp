#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For reverse function
#include <set>

using namespace std;

int bs(vector<int>& nums, int start, int x) {
       int end = nums.size()-1;
       while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] == x){
                return mid;
            }
            else if(x > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
       }   
       return -1;
    }

    int findPairs(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;

        for(size_t i=0; i<nums.size(); i++){
            if(bs(nums, i+1, nums[i]+k) != -1){
                    ans.insert({nums[i], nums[i] + k});
            }
        }

        return ans.size();
    }

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 1;

    int result = findPairs(nums, k);

    cout<<"K-diff-pairs : "<<result<<endl;
}