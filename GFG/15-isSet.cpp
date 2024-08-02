#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Naive Solution:
// void isSet(int n, int k){
//    for(int i=0; i<(k-1); i++){
//     n/=2;
//    }

//    if((n&1)!=0) {
//     cout<<"Yes"<<" ";
//    }
//    else{
//     cout<<"No"<<" ";
//    }

// }


// Efficient Solution:
// void isSet(int n, int k){
//     int x = (1<<(k-1)); //2^k-1  // except running loop using left shift operator.
//     if((n & x) != 0)  {// odd or not
//     cout<<"Yes"<<" ";
//     }
//     else {
//     cout<<"No"<<" ";
//     }
    
// }

// Efficient Solution:
void isSet(int n, int k){
    int x = (1<<(k-1));
    if((n & x)!= 0){
        cout<<"Yes"<<" ";
    }
    else{
        cout<<"No"<<" ";
    }
}


int main() {
        int num1,num2;
        cout<<"Enter a num : "<<endl;
        cin>>num1>>num2;
    	
        cout<<"Result : ";
        isSet(num1,num2);
        cout<<endl;

    	return 0;
}
