#include<iostream>
using namespace std;

int fact(int n){

   int ans = 1;
   for(int i=1; i<=n; i++){
    ans *= i;
   }
   return ans;
}

int main(){
  int a,b;
  cout<<"enter the number :"<<endl;
  cin>>a;
  cout<<"factorial of 'a' is = "<<fact(a)<<endl;
  cout<<"enter the number to find for 'a' and 'b' both : "<<endl;
  cin>>a>>b;
  cout<<"factorial of 'b' is = "<<fact(b)<<endl;
  cout<<"factorial of 'b-a' is =" <<fact(b-a)<<endl;

  return 0;
}