#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void QuickSort(vector<int>& arr, int start, int end){
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
    vector<int> arr = {7,6,3,2,8};
    int n = arr.size();
    QuickSort(arr,0,n-1);

    for(auto i : arr){
        cout<<"sorted array by quick-sort : "<<i<<" "<<endl;
    }
    return 0;
}