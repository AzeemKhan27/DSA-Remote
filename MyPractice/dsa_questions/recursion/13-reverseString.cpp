#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void reverseString(string &S, int start, int end){

  //base case
  if(start >= end) {
    return;
  }

  //ek case solve krdo
  swap(S[start], S[end]);

  //recursion sambhal lega
  reverseString(S,start+1,end-1);
}
int main(){
    string S;
    cout<<"enter string : "<<endl;
    cin>>S;

    reverseString(S, 0, S.size() - 1);

    cout<<"Reversed string: "<<S<<endl;

    return 0;
}