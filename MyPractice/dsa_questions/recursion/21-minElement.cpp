#include <iostream>
using namespace std;


int minEle(int arr[], int index,int n){

    if(index == n-1) return arr[index];

    return min(arr[index], minEle(arr,index + 1,n));
}

int main(){
    int arr[]={8,7,9,11,3,2,1};

    cout<<"Minimum Element is = "<<minEle(arr,0,7);
}

// Looping Aproach

// int minEle(int arr[], int index){
//     return arr[index];
// }

// int main(){
//     int arr[]={8,7,9,11,3,2,1};
//     int num = arr[0];
//     for(int i=0; i<7 ; i++){
//         num = min(num, minEle(arr,i));
//     }

//     cout<<"Minimum Element is = "<<num;
// }