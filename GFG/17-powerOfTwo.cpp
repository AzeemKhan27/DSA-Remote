#include <iostream>
using namespace std;

// Naive Solution
// bool isPowerTwo(int n) {
//     if(n == 0) return false;;

//     while(n != 1){
//         if(n % 2 != 0) return false;

//         n/=2;
//     }
//     return true;
// }

// Efficient Solution

// bool isPowerTwo(int n) {
//     if(n == 0) return false;

//     return ((n&(n-1)) == 0);
// }

// Short and Efficient Solution
bool isPowerTwo(int n) {
    return (n&&((n&(n-1)) == 0));
}

int main() {
    int num1;

    cout << "Enter the first number: ";
    cin >> num1;

    bool result = isPowerTwo(num1);

    if(result){
        cout<<num1<<" is the power of two :" <<" "<<endl;
    }
    else{
        cout<<num1<<" is not a power of two. "<<endl;
    }

    return 0;
}
