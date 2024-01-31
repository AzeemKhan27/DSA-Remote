/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 
Constraints:

-231 <= n <= 231 - 1
*/

#include<iostream>
using namespace std;

bool isPowerOftwo(int n){
   if(n < 1)
   return false;
   
   while(n!=1){
     if(n%2 == 1)
     return false;
     n/=2;
   }
   return true;
}

int main(){
    int num;
    cout<<"enter number to check power of two : "<<endl;
    cin>>num;
    bool n = isPowerOftwo(num);
    // cout<<"power of two" <<bool(n) <<endl;
    cout<<"power of two is :" <<boolalpha <<n <<endl;

    return 0;
}