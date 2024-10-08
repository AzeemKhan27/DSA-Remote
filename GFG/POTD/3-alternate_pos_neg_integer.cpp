
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int>pos;    //positive num store krne k liye 
        vector<int>neg;    //negative num store krne k liye
        
        //positive and negative ko alg alg store kronga
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);   //postive or zero nums ko push back kr diya pos me
            }
            else{
                neg.push_back(arr[i]);   //negative nums ko push_back neg vector me kr diya
            }
        }
        
        int posIndex = 0, negIndex = 0;
        int currentIndex = 0;  // To maintain correct index while filling
        
        //result array ko fill krne k liye
        while(posIndex < pos.size() && negIndex < neg.size()){
            if(currentIndex % 2 == 0 && posIndex < pos.size()){
                arr[currentIndex++] = pos[posIndex++];    //alternate pos elements
            } 
            if(currentIndex % 2 != 0 && negIndex < neg.size()){
                arr[currentIndex++] = neg[negIndex++];    //alternate neg elements
            }
        }
        
        //agr pos ya neg list bachi hui hai, to unhe result me daal do
        while(posIndex < pos.size()){
            arr[currentIndex++] = pos[posIndex++];
        }
        
        while(negIndex < neg.size()){
            arr[currentIndex++] = neg[negIndex++];
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

