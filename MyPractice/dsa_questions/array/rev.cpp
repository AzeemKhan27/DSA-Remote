#include<iostream>
using namespace std;

int sortArray(int arr[],int n){

    int res = 1;
    for(int i=0; i<n; i++){
        if(arr[i] <= arr[res]){
            cout<<arr[i]<<" ";
        }
        else if(arr[i] >= arr[res]){
            arr[res]=arr[i];
        }
        else{
            cout<<arr[i]<<" ";
        }
    }

    return res;

}

int main(){
    int arr[]={1,4,5,8,10,0};
    int n = sizeof(arr)/sizeof(arr[0]);


    int ans = sortArray(arr,n);
    cout<<"Sort ans is = "<<ans<<endl;

    return 0;
}