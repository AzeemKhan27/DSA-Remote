#include <iostream>
#include <stdexcept>
#include <cmath>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

class Calculator {
public:
    int power(int n, int p) {
        if (n < 0 || p < 0) {
            throw runtime_error("n and p should be non-negative");
        }
        return pow(n, p);  // n^p calculate krta hai
    }
};

int main() {
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;  // Test cases ka number
    while (T--) {
        cin >> n >> p;
        try {
            cout << myCalculator.power(n, p) << endl;
        } catch (exception& e) {
            cout << e.what() << endl;  // Exception ka message print karega
        }
    }
    return 0;
}

