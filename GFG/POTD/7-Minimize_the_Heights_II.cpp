#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

class Solution {
public:
    // Function to get the minimum difference between the heights.
    int getMinDiff(int arr[], int n, int k) {
        // If there's only one tower, the difference is 0.
        if (n == 1) return 0;

        // Sort the array to handle heights in order
        sort(arr, arr + n);

        // Initial difference between max and min height before any operations
        int diff = arr[n - 1] - arr[0];

        // Now calculate the smallest and largest possible heights
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;

        // Iterate over the array from the second element to the second last
        for (int i = 0; i < n - 1; i++) {
            int minVal = min(smallest, arr[i + 1] - k);
            int maxVal = max(largest, arr[i] + k);

            // If minVal becomes negative, skip this iteration as it is invalid
            if (minVal < 0) continue;

            // Update the minimum difference
            diff = min(diff, maxVal - minVal);
        }

        return diff;
    }
};

int main() {
    int n, k;
    cin >> k >> n; // Input number of towers and the value of k
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input tower heights
    }

    Solution obj;
    int result = obj.getMinDiff(arr, n, k);
    cout << result << endl;

    return 0;
}