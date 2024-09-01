#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void printPermutation(string &str, int i){
    //base case

    if(i >= str.length()) {
        cout<< str <<" " << endl;
        return;
    }

    
    //Swapping 
    for(int j = i; j < str.length(); j++){
        
    // swap the characters at i and j
    swap(str[i],str[j]);

    // recursive call

    printPermutation(str,i+1);

    //back-tracking call

    swap(str[i],str[j]);

    }
}

int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str,i);

    return 0;
}