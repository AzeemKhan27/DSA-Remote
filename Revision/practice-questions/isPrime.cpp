#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<2)
        return 0;

    for(int i=2; i*i<=num; i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int num;
    cout<<"enter the number :"<<endl;
    cin>>num;
    if(isPrime(num))
       cout<<num <<" is prime."<<endl;
    else
       cout<<num <<" is not prime."<<endl;
    
    return 0;
}