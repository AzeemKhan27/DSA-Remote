#include<iostream>
using namespace std;

void findZeroesAndOneFromAnArray (int arr[], int size){
    int numZeroes = 0;
    int numOne = 0;

    for(int i=0; i<=size; i++){
        if(arr[i] == 0){
            numZeroes++;
        }

        if(arr[i] == 1){
            numOne++;
        }
    }

    cout<<"Total Zeroes in array : "<<numZeroes<<endl;
    cout<<"Total Once in array : "<<numOne<<endl;
}

int main(){
    int arr[] = {0,1,1,0,0,0,1,0,1,1,0,1,1,1,1,0};
    int size = 15;
    // int size = sizeof(arr) / sizeof(arr[0]);

    findZeroesAndOneFromAnArray(arr, size);

    return 0;

}