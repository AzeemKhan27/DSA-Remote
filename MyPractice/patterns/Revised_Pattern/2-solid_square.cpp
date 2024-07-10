#include<iostream>
using namespace std;

void solid_square(int num) {
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    solid_square(5);

    return 0;
}