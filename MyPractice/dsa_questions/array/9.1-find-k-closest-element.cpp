#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int lower_bound(const vector<int>&arr, int x){
    int start = 0, end = arr.size()-1;
    int ans = end;
    
    while(start <= end){
        int mid = start + (start - end) / 2;
        // int mid = start - end / 2;
        
        if(arr[mid] >= x){
            ans = mid;
            end = mid - 1;
        }
        else if(x > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
          
        }
    }
    return ans;
}

vector<int> binary_search_method(const vector<int>&arr, int k, int x){
    //lower bound
    int h = lower_bound(arr, x);
    int l = h-1;
    while(k--){
        if(l < 0){
            h++;
        }
        else if(h >= arr.size()){
            l--;
        }
        else if(x - arr[l] > arr[h] - x){
            h++;
        }
        else{
            l--;
        }
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binary_search_method(arr,k,x);
}
    
int main(){
    int x = 35;
    int k = 4;
    vector<int> arr = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    vector<int> result = findClosestElements(arr,k,x);

    for(int nums : result){
        cout<<nums<<" ";
    }
    cout<<endl;
    return 0;
}