#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool checkPal(string str,int start, int end){
    //base case
    if(start >= end) return 1;

    //1 case sambhal lo
    if(str[start] != str[end]) return 0;

    //baaki recursion sambhal lega
    return checkPal(str, start+1, end+1);
}

int main(){

    string str = "azeem";
    cout<<"Output: "<<checkPal(str,0,4)<<endl;

    return 0;
}