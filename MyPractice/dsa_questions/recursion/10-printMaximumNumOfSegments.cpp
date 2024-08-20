#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int solve(int n,int x, int y, int z){  // solve() function tell to print Maximum Number of Segments.
    //base case
    if(n == 0) return 0;

    if(n < 0){
        return INT_MIN;
    }

    int ans1 = solve(n-x, x,y,z) + 1;
    int ans2 = solve(n-x, x,y,z) + 1;
    int ans3 = solve(n-y, x,y,z) + 1;

    int ans = max(ans1, max(ans2,ans3));
    return ans;
}
int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;


    //solve function -> return maximum number of segments
    int ans = solve(n,x,y,z);
    cout<<"Answer is : "<<ans <<endl;

    return 0;
}