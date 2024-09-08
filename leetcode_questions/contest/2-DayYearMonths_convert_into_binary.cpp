#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Function to convert an integer to a binary string without leading '0b'
string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

string dateToBinary(const string& date) {
    // Extract year, month, and day from the date string
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    
    // Convert year, month, and day to binary
    string yearBinary = toBinary(year);
    string monthBinary = toBinary(month);
    string dayBinary = toBinary(day);
    
    // Return the formatted binary string
    return yearBinary + "-" + monthBinary + "-" + dayBinary;
}

int main() {
    // Test cases
    string date1 = "2080-02-29";
    string date2 = "1900-01-01";

    cout << dateToBinary(date1) << endl;  // Output: "100000100000-10-11101"
    cout << dateToBinary(date2) << endl;  // Output: "11101101100-1-1"

    return 0;
}
