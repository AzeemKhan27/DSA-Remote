#include <iostream>
#include <cmath>
using namespace std;

//Optimized Implementation.
// int greatestCommonDivisor(int a, int b){

// if(b == 0) return a;

// return gcd(b,a%b);

// }

// Naive Solution
int greatestCommonDivisor(int a, int b){

while(a != b){
    if(a > b) {
        a = a-b;
        return a;
    }
    else{
        b = b-a;
        return b;
    }
}

}

int main() {
        int a, b;
        cout<<"Enter a num-1 "<<endl;
        cin>>a;
        cout<<"Enter a num-2 "<<endl;
        cin>>b;
    	
    	cout <<"Greatest Common Divisor of " << a << " and " << b << " is: "  <<greatestCommonDivisor(a,b)<<endl;
    	
    	return 0;
}
