#include <iostream>
#include <stdexcept>
#include <cmath>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

class findMax {
    public : 
       int findMaxEle(vector<int>arr){
         int max = arr[0];
         for(int i=1; i<arr.size(); i++){
            if(arr[i] > max){
               max = arr[i];
            }
         }
         return max;
       }
}

int main(){
    findMax myMaxEle;
    vector<int> arr = {2,4,9,1,4};
    int maxElement = myMaxEle.findMaxEle(arr);
    cout<<"maximum element: "<<maxElement<<endl;
    return 0;
}