#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void QuickSort(int arr, int start, int end){
    if(start >= end) return;

    int pivot = end;

    int i = start - 1;
    int j = start;

    while(j < pivot){
        if(arr[j] < arr[pivot]){
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[pivot]);
    QuickSort(arr,start, i-1);
    QuickSort(arr,i+1, end);

    
}

int main(){
    int arr = {7,6,3,2,8};
    int n = arr.size();
    cout<<QuickSort(arr,0,n-1);
    return 0;
}