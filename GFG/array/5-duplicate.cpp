#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
   int res = 1;
   for(int i = 1; i<n; i++){
    if(arr[i] != arr[res-1]){
        arr[res] = arr[i];
        res+=1;
    }
   }
   return res;
}

int main(){
   int arr[] = {10,10,20,20,30,30,40,40,50,50};
   int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Removal"<<endl;

   for(int i=0; i<n; i++){
     cout << arr[i] << " ";
   }

   cout << endl;

   n = removeDuplicate(arr,n);

   cout<<"After Reverse:"<<endl;

   for(int i=0; i<n; i++){
        cout << arr[i] << " ";
   }
}