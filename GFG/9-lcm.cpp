#include <iostream>
#include <cmath>
using namespace std;

//Optimized Implementation.
int gcd(int a, int b){
   if(b == 0){
    return a;
   }
   else{
    return gcd(b,a%b);
   }
}

int lcm(int a, int b){
    return (a * b)/gcd(a,b);
}

int main() {
        int a, b;
        cout<<"Enter a num-1 "<<endl;
        cin>>a;
        cout<<"Enter a num-2 "<<endl;
        cin>>b;
    	
    	cout <<"Greatest Common Divisor of " << a << " and " << b << " is: "  <<gcd(a,b)<<endl;
    	cout <<"Least Common Divisor of " << a << " and " << b << " is: "  <<lcm(a,b)<<endl;
    	
    	return 0;
}
