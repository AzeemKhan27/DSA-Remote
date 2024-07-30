#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int countDigits(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count += 1;
    }
    return count;
}

int main() {
    int num1;

    cout << "Enter the number: ";
    cin >> num1;

    // Calling the sum function and storing the result
    int result = countDigits(num1);

    // Displaying the result
    cout << "Counted Digits is : " << result << endl;

    return 0;
}
