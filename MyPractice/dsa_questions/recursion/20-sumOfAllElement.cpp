#include <iostream>
using namespace std;

int sumOfAllElements(int arr[], int index, int n){
    if(index == n ) return 0; // base case;
    
    return arr[index] + sumOfAllElements(arr,index + 1, n);
}

int main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]); // getting the size of array using sizeof operator.

    cout<<"Sum of all element : "<<sumOfAllElements(arr, 0, n) <<endl;

    return 0;
   
}


//Looping Approach

// void sumOfAllElements(int arr[], int index){
//     if(index == n ) return 0; // base case;
    
//     return arr[index];
// }

// int main(){

//     int arr[] = {1,2,3,4};
//     int total = 0;
//     for(int i=0; i<arr.size();i++)
//     total += sumOfAllElements(arr,i);
//     // sumOfAllElements(arr, index, size);
//     cout<< total;
   
// }