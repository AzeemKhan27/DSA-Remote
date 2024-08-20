#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{1,2,3,1,3,5,8,1,9};
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;

    solve(arr,i,sum,maxi);

    cout<<maxi <<endl;

    return 0;
}

int solve(vector<int>& arr,int i, int sum, int &maxi){
   //base case
   if(i >= arr.size()){
    //maxi update
    maxi = max(sum,maxi);
    return;
   }

   //include
   solve(arr,i+2,sum+arr[i],maxi);
   //exclude
   solve(arr,i+1,sum,maxi);
}