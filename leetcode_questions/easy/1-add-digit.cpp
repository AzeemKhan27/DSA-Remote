/* Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 
Constraints:

0 <= num <= 231 - 1
 
Follow up: Could you do it without any loop/recursion in O(1) runtime? */

#include<iostream>
using namespace std;

int addDigits(int num){
   while(num > 9){
     int answer = 0, rem;
     int originalNum = num; //Storing origin value of number.

      while(originalNum != 0){
        rem = originalNum % 10;
        originalNum /= 10;         //this logic divide our digit and remove last digit.
        answer += rem;
   }
      num = answer;  //updating num with ans value, for make single digit. becz our num value were "0".
   }
   return num;
}

int main(){
  int number;
  cout<<"enter number :" <<endl;
  cin>>number;
  int holdNum = addDigits(number);
  cout<<"Sum of digits till converted it into a single digit : " <<holdNum <<endl;
  return 0;
}

