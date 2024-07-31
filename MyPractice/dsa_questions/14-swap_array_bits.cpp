#include <iostream>
#include <climits>
#include <vector>
using namespace std;


void printArray(vector<int>arr){
    for(auto i : arr){
        cout<<i<<" ";
    }
}

int main() {

   vector<int> arr{0,1,0,1,1,0,1,0,1,1};
   int start = 0;
   int end = arr.size()-1;
   int i = 0;

   while(i != end){
    cout<<"for i= "<<i<<" start= "<<start<<" end= "<<end <<endl;
    if(arr[i] == 0){
        cout<<"found zero"<<endl;
        cout<<"before swap"<<endl;
        printArray(arr);

        swap(arr[start], arr[i]);
        cout<<"after swap"<<endl;
        printArray(arr);
        start++;
        i++;
        cout<<"now i= "<<i <<" start="<<start<<" end= "<< end <<endl;
    }
    else {
        cout<<"found one"<<endl;
        cout<<"before swap"<<endl;
        printArray(arr);
        swap(arr[end], arr[i]);
        end--;
    }
   }

//    //print 
//    for(auto value : arr){
//     cout<<value<<" ";
//    }
   
 }
    
    