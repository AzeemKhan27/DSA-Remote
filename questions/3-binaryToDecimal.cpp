#include<iostream>
using namespace std;

int findDecimal(int value){
   int num = value, ans = 0, mul = 1, rem;
   while(num>0){
    rem = num%10;
    num/=10;
    ans= rem*mul+ans;
    mul*=2;
   }
   return ans;
}

int main(){
   int val;
   cout<<"enter binary value to find decimal value : ";
   cin>>val;

   int decimalVal = findDecimal(val);
   cout<<"Decimal value is : " << decimalVal <<endl;

   return 0;
}