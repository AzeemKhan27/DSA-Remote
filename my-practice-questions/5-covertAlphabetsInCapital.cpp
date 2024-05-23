#include<iostream>
using namespace std;

char convert(char alpha){

   int diff = alpha - 32;
   char ans = static_cast<char>(diff);
   return ans;
}
int main(){
   char alpha;
   cout<<"enter the alphabet to convert in Capital letter :" <<endl;
   cin>>alpha;
   alpha = convert(alpha);
   cout<<"Upper Case : "<<alpha <<endl; 

   return 0;
}