#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


// int countSetBit(int n){
//     int res=0;
//     while(n>0){
//         if(n%2 == 1)
//         res++;  
//     n/=2;
//     }
//     return res;
// }

int countSetBit(int n){
    int res=0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    return res;
}


int main() {
        int num;
        cout<<"Enter a num : "<<endl;
        cin>>num;
        cout<<"Result : ";
        cout<<countSetBit(num)<<endl;
    	return 0;
}
