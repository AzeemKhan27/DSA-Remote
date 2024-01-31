/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 
Constraints:

-231 <= x <= 231 - 1
*/

#include<iostream>
#include <climits>
using namespace std;

int reverseInteger(int N){
    int ans = 0, rem;
    while(N!=0){
        rem = N%10;
        N/=10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10)
        return 0;
        ans= ans*10+rem;
    }
    return ans;
}

int main(){
    int number;
    cout<<"enter number value : "<<endl;
    cin>>number;
    int num = reverseInteger(number);
    cout<<"Reverse Number is = "<<num;
    return 0;
}


