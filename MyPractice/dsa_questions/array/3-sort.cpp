#include<iostream>
using namespace std;

void sortArray(int *arr, int n){

    int i=0;
    int index = arr[i] - 1;
    while (i < n) {
      if(arr[i] != arr[index]){
        swap(arr[i], arr[index + 1]);
      }else{
        ++i;
      }
    }

     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, -3, 4, -5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);
    
    return 0;
}
