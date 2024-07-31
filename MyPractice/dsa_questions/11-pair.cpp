#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int main() {

    vector<int>arr{10,20,40,60,70};
    
    for(int i = 0; i < arr.size(); i++){
    cout<<"We are element : "<<arr[i] <<endl;
    int element = arr[i];

    for(int j=i+1; j<arr.size(); j++){
        cout<<"Pair "<<element<<" with "<<arr[j]<<endl;
      }
    }

    return 0;
}