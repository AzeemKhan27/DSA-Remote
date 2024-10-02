#include<iostream>
using  namespace std;

int solveMe(vector<int> &coins, int amt, vector<int> &dp){
    //base case
    if(amt == 0) return 0;
    if(amt < 0) return INT_MAX;

    //step-1 base case k just baad check kro kya ans pehle se exist hai ya nhi;
    if(dp[amt] != -1) return dp[amt];

    int mini  = INT_MAX;

    for(int i = 0; i < coins.size(); i++){
        // mini = min(mini, solveMe(coins, amt - coins[i], dp));

        int ans = solveMe(coins, amt - coins[i], dp);

        //check valid ans
        if(ans != INT_MAX) return mini = min(mini, 1 + ans);

    }
    dp[amt] = mini;
    return mini;
}

int main(){
    int coinChange(vector<int>& coin, int amt){
        vector<int> dp(amt + 1,-1);
        int ans = solveMe(coin, amt, dp);
        if(ans == INT_MAX)
        return -1;
        else
        return ans;
    }
}