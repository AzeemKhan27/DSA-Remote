#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    //Step-1 : I/O lete number of elements (n) aur array elements.
    int n;      
    cin >> n;   //No. of ele in array
    vector<int> arr(n);   //Array of size n
    
    for(int i=0; i < n; i++) {
        cin>>arr[i];
    }   
    
    //step-2 : Mean ko calc karte hai.
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    double mean  = sum/n;
    cout<<fixed; //Output ko fixed decimal me print krenge.
    cout.precision(1);  //Precision 1 decimal place tak.
    cout<<mean<<endl;
    
    //step-3 : Median ko calc karte hai.
    
    //sort krenge middle nikalne k liye
    sort(arr.begin(), arr.end());
    
    double median;
    if(n%2 == 0){
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;   //even length hai isiliye do middle eles ka average nikalenge.
        
    }else{
        median = arr[n/2]; // orelse mid ele find karenge.
    }
    
    cout<<median<<endl;
    
    //step-4 : Mode calc karte hai
    
    // Map use karenge frequency count ke liye
    map<int, int> frequency;
    
    for(int i=0; i<n; i++){
        frequency[arr[i]]++;  // har ele ki frequency ko count krenge.
    } 
    
    int mode = arr[0]; // Initially first element ko mode maan lenge
    
    int max_freq = frequency[mode]; //Pehli baar mode ki frequency set karenge
    
    for(auto& pair : frequency){
        if(pair.second > max_freq){ //agr curr ele ki freq zyada hai
        
        mode = pair.first; //us element ko mode set krenge.
        max_freq = pair.second;  //max freq ko update krenge.
            
        }else if(pair.second == max_freq && pair.first < mode){
            mode = pair.first; //agar frequency barabar ho aur value chhoti ho to mode update krenge
        }
    }
    cout<<mode <<endl;

    return 0;
}
