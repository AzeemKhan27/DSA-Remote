#include<iostream>
using namespace std;

char convert(char alpha){

   // 1 Approach
   // int diff = alpha - 32;
   // char ans = static_cast<char>(diff);

   // 2 Approach

   int ans = alpha - 'a' + 'A';
   if(ans < 97){
      cout<< "please enter small alphabetic letter :"<< endl;
   }
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