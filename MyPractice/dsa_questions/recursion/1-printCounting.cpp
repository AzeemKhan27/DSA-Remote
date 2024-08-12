#include <iostream>
using namespace std;

void printCounting(int n) {
    //base case          // stopping condition
    if(n==0) return;

    //recursive condition or call
    printCounting(n-1);

    //processing (optional)
    cout<<n<<" ";

   
}

int main() {
    int n;
    cout << "Enter the number of n : " << endl;
    cin >> n; 

    printCounting(n);
    
    return 0;
}