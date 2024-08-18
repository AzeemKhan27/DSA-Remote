#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void printSubsequences(string str, string output, int i){
    //base case
    if(i >= str.length()){
        cout<< output <<endl;
        return;
    } 

    //exclude
    printSubsequences(str,output,i+1);

    //include
    //below line is responsible for concatenation of output string ans ith charat character of str string
    output.push_back(str[i]);
    // or : output = output + str[i];
    printSubsequences(str, output, i+1);
}

int main(){
    string str = "abc";
    string output = "";

    int i=0;

    printSubsequences(str,output,i);
    return 0;
}