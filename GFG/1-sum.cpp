#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int sum(int n) {
    return n*(n+1)/2;
}

int main() {
    int num1;

    cout << "Enter the first number: ";
    cin >> num1;

    // Calling the sum function and storing the result
    int result = sum(num1);

    // Displaying the result
    cout << "The sum of " << num1 << result << endl;

    return 0;
}
