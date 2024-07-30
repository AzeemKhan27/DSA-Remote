#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the sum of two numbers
// int greatestCommonDivisor(int a, int b){
//   while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }


//Optimized Implementation.
int greatestCommonDivisor(int a, int b){

if(b == 0){
    return a;
}
else{
    return greatestCommonDivisor(b,a%b);
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
