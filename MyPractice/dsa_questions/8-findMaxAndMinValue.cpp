#include<iostream>
#include <climits>

using namespace std;

void maximumNumber (int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i < size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximum number is "<<maxi<<endl;
}

void minimumNumber (int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i < size; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum number is "<<mini<<endl;
}

int main(){
    int arr[] = {1,3,5,7,10,11,17,19,56,0,-1};
    int size = sizeof(arr) / sizeof(arr[0]);

    maximumNumber(arr,size);
    minimumNumber(arr,size);

    return 0;

}