#include<iostream>
#include<cmath>
using namespace std;

bool armStrong(int num,int digits){
    int temp = num, rem;
    int sum = 0;
    while(temp != 0){
        rem = temp%10;
        temp/=10;

        sum = sum + pow(rem,digits);

    }
    if(sum == num)
    return 1;
    else
    return 0;
}

int countDigits(int num){
  int countDigits = 0, temp = num;
  while(temp!= 0){
    temp = temp/10;
    countDigits++;
  } 
  return countDigits;

}

int main(){
   int num;
   cout<<"enter number to find armstrong/narcissistic number and counts digits :" <<endl;
   cin>>num;
   int digits = countDigits(num);

    cout<<armStrong(num, digits) <<endl;

   return 0;
}