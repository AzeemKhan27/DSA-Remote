#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int partition(int arr[], int s, int e) {
    // Step 1: Choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // Step 2: Find the correct/right position for pivot element and place it there
    int count = 0;
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pivotElement) {  // Corrected the comparison operator to '<='
            count++;
        }
    }

    // Position of the pivot element
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // Step 3: Partition the array around the pivot element
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivotElement) {
            i++;
        }
        while(arr[j] > pivotElement) {
            j--;
        }

        // Swap elements if required
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    // Base case
    if(s >= e) return;

    // Partition logic returns pivotIndex
    int p = partition(arr, s, e);

    // Recursion call - left side of pivot
    quickSort(arr, s, p - 1);

    // Recursion call - right side of pivot
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {8, 12, 1, 4, 20, 50, 30, 1, 5};
    int n = 9;

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for(int i = 0; i < n; i++) {  // Corrected loop condition to `i < n`
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
