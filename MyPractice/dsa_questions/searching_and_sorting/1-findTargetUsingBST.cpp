#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int target) {

  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    int midElement = arr[mid];  

    if(midElement == target) {
        return mid;
    }
    else if(target < midElement) {
        // search in the left half
        end = mid - 1;
    }
    else {
        // search in the right half
        start = mid + 1;
    }

    mid = start + (end - start) / 2;
  }
  
  // element not found
  return -1; 
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int indexOftarget = binarySearch(arr, size, target);

    if(indexOftarget == -1) {
        cout << "Element not found in array" << endl;
    }
    else {
        cout << "Element found at index " << indexOftarget << endl;
    }

    return 0;
}
