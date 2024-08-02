#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Solution:
// int power(int x, int n){
//     int res = 1;
    
//     while(n>0){
//         if(n%2==1){
//         res *= x;
//      }

//      x*=x;
//      n/=2;
//     }
//     return res;
// }

// Efficient Solution:


int main() {
        int num,pow;
        cout<<"Enter a num : "<<endl;
        cin>>num>>pow;
    	int result = power(num,pow);
        cout<<"Result : "<<result<<endl;
    	return 0;
}
