#include<iostream>
using namespace std;

int main(){
  int num;
   cout<<"enter the number to make half pyramid :" <<endl;
   cin>>num;
   

   //Star
   for(int row=1; row<=num; row++){
   
    for(int col=1; col<=row; col++){
         cout<<"* ";
    }
    cout<<endl;
   }
  
}