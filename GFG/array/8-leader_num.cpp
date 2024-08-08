#include<iostream>
using namespace std;

// Efficient Solution:
int leaderOfArray(int arr[], int n){
    int curr_leader = arr[n-1]; // last element.
 

    for(int i = n-2; i >= 0; i--){
        if(arr[i] > curr_leader){
            curr_leader = arr[i]; // update leader.
        }
        
    }
    cout << curr_leader << endl; // Print the final leader.
    return curr_leader; // Optional, if you want to return the leader.
}

int main(){

   int arr[] = {7,10,4,10,6,5,2};
   int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Get Leader Number : "<<endl;

   for(int i=0; i<n; i++){
     cout << arr[i] << " ";
   }

   cout << endl;

   cout << "Leaders in the Array: " << endl;

   n = leaderOfArray(arr,n);

   
}