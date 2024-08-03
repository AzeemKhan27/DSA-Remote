#include <iostream>
using namespace std;

// Naive Solution Implementation
// int oddAppearing(int arr[],int n) {
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count % 2 != 0){
//             return arr[i];
//         }
//     }

//     return -1;
// }

// Efficient Solution
int oddAppearing(int arr[], int n)
{
    
        int xors = 0, res1 = 0, res2 = 0; 
        
        for (int i = 0; i < n; i++) 
        xors = xors ^ arr[i]; 
  
   
        int sn = xors & (~(xors - 1)); 
  
    
        for (int i = 0; i < n; i++) 
        { 
            if ((arr[i] & sn) != 0) 
                res1 = res1 ^ arr[i]; 
            else
                res2 = res2 ^ arr[i]; 
        } 
        
        
        cout <<  res1 << " " << res2;
}

int main() {
	
	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
	
    cout<<"Odd is "<<oddAppearing(arr, n);
    
}