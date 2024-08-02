#include <iostream>
#include <cmath>
using namespace std;

//Efficient Implementation.
void printAllDivisor(int n){
    int i;
    for(i=1; i*i<n; i++){
        if(n%i == 0)
        cout<<i<<" ";
    }

    for( ; i>=1; i--){   
        if(n%i == 0)
        cout<<n/i<<" ";
    }
}

//Divisor Implementation.
// void printAllDivisor(int n){
//     for(int i=1; i<=n; i++){
//         if(n%i == 0)
//             cout<<i<<" ";
//     }
//     cout<<endl;  // To print new line after all divisors.
// }


int main() {
        int num;
        cout<<"Enter a num : "<<endl;
        cin>>num;
    	printAllDivisor(num);

    	return 0;
}
