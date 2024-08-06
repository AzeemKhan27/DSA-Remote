#include <iostream>
using namespace std;

// Function to delete an element from an array
int deleteElement(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        // search element
        if (arr[i] == x)
            break;
    }

    // if element not found
    if (i == n)
        return n;

    // shift elements to the left
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    return (n - 1);
}

int main() {
    int arr[] = {5, 8, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout << "Enter the number to delete: ";
    cin >> x;

    int newSize = deleteElement(arr, n, x);

    if (newSize == n) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Array after deletion: ";
        for (int i = 0; i < newSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
