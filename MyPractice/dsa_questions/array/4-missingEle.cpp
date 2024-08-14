#include<iostream>
#include<vector>

using namespace std;

void findMissing(int *arr,int n){
    //visited method

    for(int i = 0; i < n; i++){
        int index = abs(arr[i]);
        if(arr[index - 1] >= 0){
            arr[index-1] *= -1;
        }
    }

    // for(int i=0; i<n; i++){
    //     cout << arr[i] <<" ";
    // }

    // all positive indexes are missing
    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            cout << i+1 << " "; 
        }
    }
}

int main(){
   int n;
   int arr[]={1,3,5,3,3};
   n = sizeof(arr)/sizeof(arr[0]);

   findMissing(arr,n);

   return 0;
}