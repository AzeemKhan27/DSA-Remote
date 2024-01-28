#include<iostream>
using namespace std;

int findBinary(int val){
     int rem, mul=1, ans = 0;
     while(val>0){
        rem = val%2;
        val/=2;
        ans= rem*mul+ans;
        mul*=10;
     }
     return ans;
}

int main(){git
    int value;
    cout<<"enter decimal value to find correct binary value from given decimal value :"<<endl;
    cin>>value;

    int binaryVal = findBinary(value);
    cout<<"Binary value is = "<<binaryVal <<endl;

    return 0;
}
