#include<iostream>
#include <climits>

using namespace std;

void extremeNumber (int arr[], int size){
    int start = 8;
    int end = size-1;

    if (start >= size) {
        cout << "Start index is out of bounds." << endl;
        return;
       }

    // while(true){
    while(start < end){
        if(start > end)
          break;


       if(start == end){
          cout<<arr[start] <<" ";  
       } 
       else{
       cout<<arr[start] <<" "<< arr[end] << " ";   
       }

       start++;
       end--; 
        
    }
}


int main(){
    int arr[8] = {10,80,20,70,30,60,40,50};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int size = 8;

    extremeNumber(arr,size);

    return 0;

}