/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
*/

#include<iostream>
#include <climits>
using namespace std;

bool isPalindromeNumber(int num){
    int number = num, rem, ans = 0;

    while(number > 0){
        rem = number%10;
        number/=10;
        if(ans > INT_MAX/10)
        return 0;
        ans = ans*10+rem;
    }
    // if(num == ans)
    // return 1;
    // else
    // return 0;
    return num == ans;
}

int main(){
    int num;
    cout<<"enter number to check palindrome or not : "<<endl;
    cin>>num;
    int n = isPalindromeNumber(num);
    cout<<"isPalindrome Number : "<<(n==1)<<endl;
    return 0;
}