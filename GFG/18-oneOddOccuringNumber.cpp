#include <iostream>
using namespace std;

// Naive Solution Implementation
// int findOdd(int arr[],int n) {
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count % 2 != 0){
//             return arr[i];
//         }
//     }

//     return -1;
// }

// Efficient Solution



int main() {
	
	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
	
    cout<<"Odd is "<<findOdd(arr, n);
    
}

// int main() {
//     int size;
//     int arr[];

//     cout << "Enter the size of the array: ";
//     cin >> size;

//     if (size <= 0) {
//         cout << "Invalid size!" << endl;
//         return 1;
//     }

//     int* arr = new int[size];

//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     bool result = isOddOccuringNumber(arr,size);

//     if (result != -1) {
//         cout << "The number that occurs an odd number of times is: " << result << endl;
//     } else {
//         cout << "No number occurs an odd number of times." << endl;
//     }

//     //  delete[] arr;

//     return 0;
// }
