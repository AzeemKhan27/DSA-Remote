#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void lowerCase(string &str, int index){
    
    //base case
    if(index == -1) return;

    str[index] = 'A'+str[index] -'a';
    lowerCase(str, index-1);
}

int main(){

    //lowercase to uppercase
    string str = "azeem khan";
    lowerCase(str,9);
    cout<<str<<endl;
}
