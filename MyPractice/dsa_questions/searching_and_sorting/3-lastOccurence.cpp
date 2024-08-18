#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int lastOccurence(vector<int>& arr, int target) {
   int start = 0;
   int end = arr.size() - 1;
   int ans = -1;

   while (start <= end) {
      int mid = start + (end - start) / 2;

      if (arr[mid] == target) {
         ans = mid;
         start = mid + 1; // continue searching in the right half
      } 
      else if (arr[mid] > target) {
         // search in the left half
         end = mid - 1;
      } 
      else {
         // search in the right half
         start = mid + 1;
      }
   }

   return ans;
}

int main() {
    vector<int> arr {1, 2, 3, 4, 4, 4, 4, 7, 7, 7};
    int target = 7;
    int lastIndex = lastOccurence(arr, target);
    cout << "Last Occurrence of " << target << " is at index: " << lastIndex << endl;

    // Using Predefined Functions in C++ to find upper bound or last occurence

     auto ans2 = upper_bound(arr.begin(),arr.end(),target);
     cout<<"Using upper_bound() : "<<(ans2 - arr.begin())<<endl;

    return 0;
}
