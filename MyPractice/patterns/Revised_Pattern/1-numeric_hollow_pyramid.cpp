
#include <iostream>
using namespace std;


void numeric_hollow_pyramid(int num) {
     
    for(int row=1; row<=num; row++){
        
        // spaces
        for(int col=1; col<=num-row; col++){
            cout << " ";
        }
        
        // numbers and hollow spaces
        for(int col=1; col<=row; col++){
            if(col == 1 || col == row || row == num){
                cout << col;
            } else {
                cout << " ";
            }
            if (col != row) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter the number to make a numeric hollow pyramid shape by stars: " << endl;
    // cin >> num; 

    numeric_hollow_pyramid(5);

    return 0;
}