#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the sum of two numbers
int largestElement(int arr[],int n){
 for(int i=0; i<n; i++){
    bool flag = true;

    for(int j=0; j<n; j++){
        if(arr[j] > arr[i]){
            flag = false;
            break;
        }
    }
 
    if(flag == true){
        return i;
    }
}
    return -1;
}

int main() {
        int arr[]= {5,8,20,10};
    	
    	cout<<"The Largest Number index is : "<<largestElement(arr,4);
    	
    	return 0;
}
