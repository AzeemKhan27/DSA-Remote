#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void revString(string &str, int start, int end){
    //base case
    if(start >= end) return;

    //1 case solve krdo
    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    
    return revString(str, start+1, end-1);

    //baaki recursion sambhal lega
}

int main(){
    string str = "Azeem";
    revString(str,0,4);
    cout<<"Reverse Output is = "<<str<<endl;
    return 0;
}