#include <iostream>
using namespace std;

int fib(int n) {
    //base case
    if(n==0) return 0;
    if(n==1) return 1;

    //processing (optional)
    cout<<n<<" ";

    //recursive condition or call
    int ans = fib(n-1) + fib(n-2);
    return ans;
   
}

int main() {
    int n;
    cout << "Enter the term you want to see :" << endl;
    cin >> n; 

    fib(n);
    
    return 0;
}