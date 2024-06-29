#include <iostream>
using namespace std;

void rectangle(int num, int colNum) {
    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= colNum; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int num, colNum;
    cout << "Enter the number of rows and columns to make a rectangle shape by stars: " << endl;
    cin >> num >> colNum;

    rectangle(num, colNum);
    
    return 0;
}
