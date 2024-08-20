#include<iostream>
#include<climits>
#include<vector>

using namespace std;

bool isPal(string &S,int start,int end){
    //base case
    if(start >= end) return true;

    //one case solve krdo
    if(S[start] != S[end]){
        return false;
    }

    //baaki recursion sambhal lega
    return isPal(S,start + 1, end - 1);
}

int main(){
    string S;
    cout<<"Enter the string : "<<endl;
    cin>>S;
    cout<<isPal(S,0,S.size()-1)<<endl;

    return 0;
}