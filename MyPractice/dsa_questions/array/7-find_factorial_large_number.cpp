#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<int> factorial(int N) {
    vector<int> ans;
    ans.push_back(1); // Start with 1! = 1
    int carry = 0;

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < ans.size(); j++) {
            int x = ans[j] * i + carry;
            ans[j] = x % 10; // Store last digit
            carry = x / 10; // Calculate carry for next digit
        }
        while (carry) {
            ans.push_back(carry % 10); // Add carry as a new digit
            carry /= 10; // Reduce carry
        }
    }
    reverse(ans.begin(), ans.end()); // Reverse to get the correct order
    return ans;
}

int main() {
    int N;
    cout << "Enter a number to find its factorial: ";
    cin >> N;

    vector<int> result = factorial(N);
    
    cout << "Factorial of " << N << " is: ";
    for (int digit : result) {
        cout << digit; // Print each digit
    }
    cout << endl;

    return 0;
}
