#include<iostream>
#include<limits.h>
#include<climits>

using namespace std;

void findMax(int arr[],int n,int i, int& maxi){

  //base case
  if(i >= n)  //if array finished, and traversed successfully then return back.
  {
    return; 
  }

  // 1 case solve krna hai 
  // current element ko check kro for max element
  if(arr[i] > maxi){
    maxi = arr[i];  // update maxi with current element if it is greater.
  }

  //baaki recursion sambhal lega
  findMax(arr,n,i+1,maxi);
}


void findMin(int arr[],int n, int i, int& mini){

  //base case
  if(i >= n) return;

  //1 case solve krna hai
  mini = min(mini,arr[i]);

  //baaki recursion sambhal lega
  findMin(arr,n,i+1,mini);
}

int main(){

    int arr[] = {10,30,21,44,32,17,19,66};
    int n=8;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int i=0;
    findMax(arr,n,i,maxi);
    findMin(arr,n,i,mini);

    cout<<"Maximum element is: "<<maxi<<endl;
    cout<<"Minimum element is: "<<mini<<endl;

    return maxi;
}