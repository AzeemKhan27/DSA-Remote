#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal(int n){
    int decimalNum = 0;
    int i = 0;

    while(n){
        int bit = n % 10;
        decimalNum = decimalNum  + bit * pow(2 , i++);
        n/=10;
    }
    return decimalNum;
}


int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int ans = binaryToDecimal(num);
    cout<<ans<<endl;

    return 0;
  
}