#include<iostream>
#include<climits>
#include<vector>

using namespace std;

// void printLengthOfDistinct(string str, string output, int i){
//     //base case
//     if(i >= str.length()){
//         cout<< output <<endl;
//         return;
//     } 

//     //exclude
//     printSubsequences(str,output,i+1);

//     //include
//     //below line is responsible for concatenation of output string ans ith charat character of str string
//     output.push_back(str[i]);
//     // or : output = output + str[i];
//     printSubsequences(str, output, i+1);
// }

int main(){
    // int N;
    // cin>>N;

    vecton<int>arr{1,2,2,3,3,4,5,5,6};
     int ans=0;
     for(int i=0; i<arr.size(); i++){
        ans += arr[i] != arr[i-1];
     }
     return ans;
}