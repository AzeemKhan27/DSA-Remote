#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n == 1)
    return false;
 
    if(n == 2 || n == 3)
    return true;

    if(n%2 == 0 || n%3 == 0)
    return false;

    for(int i=5; i*i<=n; i=i+6){
        if(n%i == 0 || n%(i+2) == 0)
        return false;
    }

    return true;

}

//Naive Solution:
// void printSieve(int n){
//     for(int i=2; i<=n; i++){
//         if(isPrime(i))
//         cout<<i<<" ";
//     }
// }

// Efficient Solution:
void printSieve(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; ++i){
        if(isPrime[i])
        {
            for(int j=i*i; j<=n; j += i){
            isPrime[j] = false;
         }
        }
  }    
  for(int i=2; i<=n; ++i){
    if(isPrime[i]){
        cout<<i<<" ";
    }
  }
  cout<<endl;
}

int main() {
        int num;
        cout<<"Enter a num : "<<endl;
        cin>>num;
    	printSieve(num);

    	return 0;
}
