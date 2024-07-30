#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the sum of two numbers
int fact(int n){
    int res=1;
    for(int i=2; i<=n; i++){
        res *= 1;
        
    }
    return res;
}

int main() {
        int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}
