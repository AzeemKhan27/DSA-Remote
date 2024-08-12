#include<iostream>
#include<vector>

using namespace std;

void iterateArray(int arr[], int n, int i){
    //base case
    if(i >= n) return;

    //1 case solved
    cout<<arr[i]<<" ";

    //baaki recursion sambhal lega
    iterateArray(arr,n,i+1);

}


int main() {
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    
    iterateArray(arr,n,i);

    return 0;
}