#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
bool isPalindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int ld = temp % 10; //get the last digit
        rev = rev * 10 + ld; // Append the last digit to the reversed number
        temp /= 10; // Remove the last digit
    }
    return rev == n;
}

int main() {
    int num1;

    cout << "Enter the number: ";
    cin >> num1;

    // Calling the sum function and storing the result
    bool result = isPalindrome(num1);

    // Displaying the result
    if(result) {
        cout << num1 << " is a Palindrome. : " << endl;
    }
    else{
        cout << num1 << " is not a palindrome. : " << endl;
    }

    return 0;
}
