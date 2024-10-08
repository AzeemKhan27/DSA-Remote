#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

int main(){
    string S;
    getline(cin, S);

    try{
        int num = stoi(S);
        cout<<num<<endl;

    }catch(exception& e){
        cout<<"Bad String"<<endl;
    }
}