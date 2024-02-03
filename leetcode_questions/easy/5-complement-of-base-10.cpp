// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

// Constraints:

// 0 <= n < 109

// Note: This question is the same as 476: https://leetcode.com/problems/number-complement/

#include<iostream>
using namespace std;

int complementOfBase10(int N){
   if(N==0)
   return 1;
   int ans = 0, rem, mul = 1;
   while(N){
     rem = N%2;
     rem = rem ^ 1;
     N/=2;
     ans = ans+rem*mul;    //calculating reminder and multiplying
     mul*=2;
   }
   return ans;
}

int main(){
  int number;
  cout<<"enter the number to find complement of base 10 : "<<endl;
  cin>>number;
  int num = complementOfBase10(number);
  cout<<"sum of complement of base 10 is = "<<num<<endl;

  return 0;
}