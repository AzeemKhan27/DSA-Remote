#include<iostream>
#include<vector>

using namespace std;

int climbStair(int n){
    //base case

    if(n==0 || n==1) 
      return 1;

    //
    return climbStair(n-1) + climbStair(n-2);
}


int main() {
    int n;
    cout << "Enter the number of n : " << endl;
    cin >> n; 

    int ans = climbStair(n);
    cout << "The number of ways to climb " << n << " stairs is " << ans << endl;
    
    return 0;
}