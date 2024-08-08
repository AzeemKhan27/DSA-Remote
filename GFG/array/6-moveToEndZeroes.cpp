#include<iostream>
using namespace std;

// Naive Solution:
// int zeroesMoveToEnd(int arr[], int n){
//    for(int i=0; i<n; i++){
//     if(int arr[i] == 0)
//     {
//         for(int j=i+1; j<n; j++){
//             if(arr[j] != 0)
//             swap(arr[i],arr[j]);
//         }
//       }
//    }
// }

// Efficient Solution:
int zeroesMoveToEnd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
//    int arr[] = {10,20,20,40,50,30,40,50,30,10,10,20,30,40,50,60,50,30,40};
   int arr[] = {0,1,0,3,0,0,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Moves Zeroes to the end"<<endl;

   for(int i=0; i<n; i++){
     cout << arr[i] << " ";
   }

   cout << endl;

   n = zeroesMoveToEnd(arr,n);

   cout<<"After Moves Zeroes to the end:"<<endl;

   for(int i=0; i<n; i++){
        cout << arr[i] << " ";
   }
}