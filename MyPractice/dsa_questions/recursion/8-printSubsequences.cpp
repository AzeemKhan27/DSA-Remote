#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void printSubsequences(string str, string output, int i, int &v){
    //base case
    // if(i >= str.length()){
    //     cout<< output <<endl;
    //     return;
    // } 

    // OR:

    if(i >= str.length() ){
        v.push_back(output);
        return;
    }

    //exclude
    printSubsequences(str,n,output,i+1,v);

    //include
    //below line is responsible for concatenation of output string ans ith charat character of str string
    output.push_back(str[i]);   
    // or : output = output + str[i];
    printSubsequences(str,n,output, i+1,v);
}

int main(){
    string str = "abc";
    string output = "";
    vector<string>v;
    int i=0;

    printSubsequences(str,output,i,v);

    cout<<"Printing all sub sequences : "<<endl;

    for(auto val : v){
        cout<<val<<" "<<endl;
    }

    cout<<endl <<"Size of vector is: "<<v.size() <<endl;
    return 0;
}