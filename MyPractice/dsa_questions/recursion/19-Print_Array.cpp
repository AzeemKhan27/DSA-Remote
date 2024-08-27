#include <iostream>
using namespace std;


// Print Array in Accending Order:
// void print(int arr[], int index, int sizeN){
//     //base case
//     if(index == sizeN) 
//     return;

//     cout<<"Print Array Integer from 0 index : "arr[index]<<" ";
//     print(arr,index + 1,sizeN);

// }

// Print Array in Decending Order:

void printRevserse(int arr[], int index){
    if(index == -1) return;

    cout<<"Print Array Integer from N index : "<<arr[index]<<" ";

    printRevserse(arr,index - 1);

    
}

int main(){
    int arr[]= {3,7,6,2,8};
    // print(arr,0,5);
    printRevserse(arr,4);
}