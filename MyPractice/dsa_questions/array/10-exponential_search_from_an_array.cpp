#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

// find X element in array and return it's index value.
int BinarySearch(int arr[], int startIndex, int endIndex, int searchElementX){
    
    while(startIndex <= endIndex){

    int mid = startIndex + (endIndex - startIndex) / 2;

    if(arr[mid] == searchElementX) {
        return mid;   
    }
    else if(searchElementX > arr[mid]) {
        startIndex = mid + 1;
    }
    else{
        endIndex = mid - 1;
    }
  }
  return -1;

}


int exponential_search(int arr[], int n, int x){
    if(arr[0] == x) {
        return 0;
    }

    int i = 1;
    while(i < n && arr[i] <= x){
        i *= 2;
    }

    int startIndex = i / 2;
    int endIndex = std::min(i, n - 1);
    return BinarySearch(arr, startIndex, endIndex, x);
}

int main(){
    int arr[]={2,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x = 13;
    int ans = exponential_search(arr,n,x);
    cout<<"Searched Value is = "<<ans<<endl;
    return 0;
}