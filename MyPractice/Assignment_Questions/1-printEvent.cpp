#include<iostream>
using namespace std;

void printEven(int num){
   int i = 2;
   while(num >= i){
     cout<<"printing even number : "<<i<<endl;
     i+=2;
   }
   
}

int main(){
   int a;
   cout<<"enter the number to print all even number :" <<endl;
   cin>>a;
   printEven(a);
   return 0;
}
