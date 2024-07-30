#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the sum of two numbers
int trailingZeroes(int n){
   //int res = 0;
   int res = 0;
   //loop start from 5 to n and i = i * 5;
   for(int i=5; i<=n; i=i*5){
        res = res + n/i;  //res = res + n/i;
   }
   return res;
   //return res;
}

int main() {
        int num;
        cout<<"Enter a number: ";
        cin>>num;
    	
    	cout<<trailingZeroes(num)<<endl;
    	
    	return 0;
}
