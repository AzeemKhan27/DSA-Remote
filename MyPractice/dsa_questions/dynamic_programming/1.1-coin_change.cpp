#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Memoization solution
int solveMe(vector<int> &coins, int amt, vector<int> &dp) {
    // Base case
    if (amt == 0) return 0;
    if (amt < 0) return INT_MAX;

    // Step 1: Check if the answer already exists in dp
    if (dp[amt] != -1) return dp[amt];

    int mini = INT_MAX;

    // Try all coins
    for (int i = 0; i < coins.size(); i++) {
        int ans = solveMe(coins, amt - coins[i], dp);

        // Check if the answer is valid
        if (ans != INT_MAX) {
            mini = min(mini, 1 + ans);
        }
    }

    dp[amt] = mini;  // Store the result in dp
    return mini;
}

// Tabulation solution
int solveTabulation(vector<int> &coins, int amt) {
    // Step 1: Create dp array
    vector<int> dp(amt + 1, INT_MAX);

    // Step 2: Base case - to make amount 0, we need 0 coins
    dp[0] = 0;

    // Step 3: Fill dp array using the logic of memoization
    for (int target = 1; target <= amt; target++) {
        int mini = INT_MAX;

        // Try all coins
        for (int i = 0; i < coins.size(); i++) {
            if (target - coins[i] >= 0) {
                int ans = dp[target - coins[i]];
                if (ans != INT_MAX) {
                    mini = min(mini, 1 + ans);
                }
            }
        }
        dp[target] = mini;  // Store the minimum number of coins required for the target
    }

    return dp[amt];
}

int main() {
    vector<int> coins = {1, 2, 5};  // Example coin denominations
    int amt = 11;                   // Example amount

    // Memoization
    vector<int> dp(amt + 1, -1);
    int resultMemo = solveMe(coins, amt, dp);
    if (resultMemo == INT_MAX) {
        cout << "Memoization: No solution" << endl;
    } else {
        cout << "Memoization: Minimum coins needed = " << resultMemo << endl;
    }

    // Tabulation
    int resultTab = solveTabulation(coins, amt);
    if (resultTab == INT_MAX) {
        cout << "Tabulation: No solution" << endl;
    } else {
        cout << "Tabulation: Minimum coins needed = " << resultTab << endl;
    }

    return 0;
}
