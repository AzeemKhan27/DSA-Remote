#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> multiplyMinKTimes(vector<int>& nums, int k, int multiplier) {
    for (int i = 0; i < k; ++i) {
        // Find the minimum value in nums
        int min_index = 0;
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        // Multiply the minimum value by multiplier
        nums[min_index] *= multiplier;
    }
    return nums;
}

int main() {
    // Example 1
    vector<int> nums1 = {2, 1, 3, 5, 6};
    int k1 = 5, multiplier1 = 2;
    vector<int> result1 = multiplyMinKTimes(nums1, k1, multiplier1);
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;  // Output: 8 4 6 5 6

    // Example 2
    vector<int> nums2 = {1, 2};
    int k2 = 3, multiplier2 = 4;
    vector<int> result2 = multiplyMinKTimes(nums2, k2, multiplier2);
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;  // Output: 16 8

    return 0;
}
