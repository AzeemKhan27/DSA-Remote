#include<iostream>
using namespace std;

int main(){
  int num;
   cout<<"enter the number to make stars :" <<endl;
   cin>>num;
   
    for(int row=1; row <= num; row ++){
      for(int col=1; col<= num; col++){
        cout<<"* ";
      }
      cout<<"\n";
   }
}