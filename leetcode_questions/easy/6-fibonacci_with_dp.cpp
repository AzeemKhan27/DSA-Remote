class Solution {
public:

    int recSolve(int n){

        //base case
        if(n == 1 || n == 0){
            return n;
        }
        
        int ans= recSolve(n-1) + recSolve(n-2);

        return ans;
    }

    int topDownApproach(int n, vector<int> &dp){
         //base case
        if(n == 1 || n == 0){
            return n;
        }

        //step3: check if Ans already exist
        if(dp[n] != -1){
            return dp[n];
        }
        
        //step2: replace ans with dp array
        dp[n] = topDownApproach(n-1,dp) + topDownApproach(n-2,dp);
        return dp[n];
    }

    int fib(int n) {
        // int ans = recSolve(n);
        // return ans;

        //step-1 : create dp array.

        vector<int> dp(n+1, -1);
        int ans = topDownApproach(n,dp);
        return ans;

        //step-2 : store ans in dp array
        //step-3 : base case k just baad ek condition likho : check if ans already exist
    }
};