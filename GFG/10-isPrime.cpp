#include <iostream>
#include <cmath>
using namespace std;

//Optimized Implementation.
bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }

    for(int i=5; i*i<=n; i=i+6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}


int main() {
        int num;
        cout<<"Enter a num-1 "<<endl;
        cin>>num;
    	bool isPrime_ = isPrime(num);

        if(isPrime_) {
            cout <<"Prime number : "  <<isPrime_<<endl;
        }
        else{
            cout <<"This is not Prime Number : "<<isPrime_<<endl;
        }
    	
    	return 0;
}
