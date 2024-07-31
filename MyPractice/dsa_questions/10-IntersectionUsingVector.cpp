#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){

    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};
    vector<int> ans;

    //outer loop on arr vector
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        //for every element, arr
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){

                //mark
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    //print ans
    for(auto value : ans){
        cout<<"this is the unique digits from all array value : "<<value<<" " <<endl;
    }

    cout<<endl;

    return 0;
}