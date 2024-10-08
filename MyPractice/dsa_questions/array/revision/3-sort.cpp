#include <iostream>
using namespace std;

void sortArray(int *arr, int n) {
    int i = 0;
    while (i < n) {
        int correct_pos = arr[i] - 1;
        if (correct_pos >= 0 && correct_pos < n && arr[i] != arr[correct_pos]) {
            swap(arr[i], arr[correct_pos]);
        } else {
            ++i;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, -3, 4, -5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    return 0;
}
