#include<iostream>
#include<cmath>

using namespace std;

bool printAllPrimeNumberToN(int n){
   
   for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
   }
   return true;
}

int main(){
    int number;
    cout<<"enter the number to check odd or even number : "<<endl;
    cin>>number;

    for(int i=2; i<=number; i++){
        bool is_i_Prime = printAllPrimeNumberToN(number);
        if(is_i_Prime){
            cout<<i<<" ";
        }
    }

    

    return 0;

}