#include<iostream>
#include<cmath>
using namespace std;


int decimalToBinary(int n){

    int binaryNo = 0;
    int i = 0;

    while(n>0){
        int bit = n % 2;   // it will show reminder of the value.
 
        binaryNo = bit*pow(10,i++) + binaryNo;      //  eg: binaryNo = 0*
        n/=2;
    }
    return binaryNo;
}


int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int binary = decimalToBinary(num);
    cout<<binary<<endl;

    return 0;
  
}