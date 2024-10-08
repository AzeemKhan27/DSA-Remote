#include <iostream>
using namespace std;

bool sameColor(string coordinate1, string coordinate2) {
    // Convert column to a number and row is already a number
    int col1 = coordinate1[0] - 'a' + 1;
    int row1 = coordinate1[1] - '0';

    int col2 = coordinate2[0] - 'a' + 1;
    int row2 = coordinate2[1] - '0';

    // Check if the sum of row and column is both even or both odd
    return (col1 + row1) % 2 == (col2 + row2) % 2;
}

int main() {
    string coordinate1 = "a1";
    string coordinate2 = "c3";

    if (sameColor(coordinate1, coordinate2)) {
        cout << "Both squares have the same color." << endl;
    } else {
        cout << "Both squares have different colors." << endl;
    }

    return 0;
}
