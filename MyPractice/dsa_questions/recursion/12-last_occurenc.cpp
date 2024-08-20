#include<iostream>
#include<climits>
#include<vector>

using namespace std;

// Left to Right
// void lastOccLTR(string &S,char x, int i, int &ans){

//  //base case
//  if(i >= S.size()){
//     return;
//  }

//  //ek case
//  if(S[i] == x){
//     ans = i;
//  }

//  lastOccLTR(S,x,i+1,ans);

// }


// Right To Left
void lastOccRTL(string &S,char x, int i, int &ans){

 //base case
 if(i<0){
    return;
 }

 //ek case
 if(S[i] == x){
    ans = i;
    return; //to break the recursion as soon as we find the first occurrence from the right side.
 }

 lastOccRTL(S,x,i-1,ans);

}

int main(){
    string s;
    cout<<"Enter the string: ";  //"abcdefg"
    cin>>s;
    char x;
    cout<<"Enter the character to find its last occurrence: "; 
    cin>>x;

    int ans = -1;
    lastOccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
}