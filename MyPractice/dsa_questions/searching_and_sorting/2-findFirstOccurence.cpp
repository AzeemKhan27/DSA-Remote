#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>& v, int target){
    int start = 0;
    int end = v.size()-1;
    int mid = start +(end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == target){
            
            ans = mid;       //ans store and then left  
            end = mid - 1;
        }
        else if(target > arr[mid]){
            //right me search
            start = mid + 1;
        }
        else if(target < arr[mid]){
            //left me search
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int main(){
    vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;
    int indexOfFirstOccurrence = firstOccurrence(v,target);
    
    cout<<"ans is "<<indexOfFirstOccurrence <<endl;
    return 0;
}