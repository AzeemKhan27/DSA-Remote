#include<iostream>
using namespace std;

void isTriangleValid(int a, int b, int c){
   if((a+b) > c && (b+c) > a && (c+a) > b){
        cout<<"Valid Triangle."<<endl;
   }
   else{
        cout<<"Not a Valid tri-angle."<<endl;
   }
}

int main(){
   int a,b,c;
   cout<<"enter the three numbers to check triangle valid or not :" <<endl;
   cin>>a>>b>>c;
   isTriangleValid(a,b,c);
   return 0;
}
