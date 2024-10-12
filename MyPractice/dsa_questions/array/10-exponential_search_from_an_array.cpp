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

// Approach-I : find X element in array, if we have "n" array size also
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

//Approach-II : if we have to find element from "Infinite array"

int exponential_search_with_infinite_array(int Arr[], int X){

    if(Arr[0] == X){
        return 0;
    }
    
    int i = 0;
    int j = 1;

    while(Arr[j] < X){
        i = j;
        j *= 2;
    }

    int start = i/2;
    int end = j;

    return BinarySearch(Arr, start, end, X);
}


int main(){
    int arr[]={2,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x = 13;
    int ans = exponential_search_with_infinite_array(arr,x);
    cout<<"Searched Value is = "<<ans<<endl;
    return 0;
}

// int main(){
//     int arr[]={2,4,5,6,11,13,14,15,56,70};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x = 13;
//     int ans = exponential_search(arr,n,x);
//     cout<<"Searched Value is = "<<ans<<endl;
//     return 0;
// }