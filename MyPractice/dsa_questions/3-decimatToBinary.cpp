#include<iostream>
#include<cmath>
using namespace std;


// int decimalToBinary(int n){

//     int binaryNo = 0;
//     int i = 0;

//     while(n>0){
//         int bit = n % 2;   // it will show reminder of the value.
 
//         binaryNo = bit*pow(10,i++) + binaryNo;      // it will reversing our reminders bits to make this correct binary and converting into integer number like 12, 13, etc //  eg: binaryNo = 0*
//         n/=2;
//     }
//     return binaryNo;
// }

int decimalToBinaryByBitwise(int n){
    int binaryNum = 0;
    int i = 0;

    while(n>0){    // eg : n=10 or 12 etc but it will store as binary number like 0101, 1010 etc.
        int bit = (n & 1);
        binaryNum = bit*pow(10, i++) + binaryNum;
        n >>= 1;  // n = n>>1;
    }
    return binaryNum;
}

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int binary = decimalToBinaryByBitwise(num);
    cout<<binary<<endl;

    return 0;
  
}