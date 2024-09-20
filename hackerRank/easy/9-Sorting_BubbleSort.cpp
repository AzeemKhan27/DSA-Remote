#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];      
    }

    int totalSwap = 0;

    //Bubble sort algorithm
    for(int i=0; i<n; i++){
        int numberOfSwaps = 0;

        //Traverse through the array
        for(int j=0; j<n-1; j++){

            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                numberOfSwaps++;
            }
        }

        totalSwap += numberOfSwaps;      //add swaps for this pass

        if(numberOfSwaps == 0){
            break;
        }
    }

    cout<<"Array is sorted in : "<<totalSwap<<" swaps."<<endl;
    cout<<"First element of array : "<<a[0]<<endl;
    cout<<"Last element of array : "<<a[n-1]<<endl;

    return 0;
}