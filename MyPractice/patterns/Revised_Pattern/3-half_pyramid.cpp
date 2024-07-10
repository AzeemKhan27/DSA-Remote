#include<iostream>
using namespace std;

void half_pyramid(int num) {
    for(int row=1; row<=num; row++){
        //space
        for(int col=1; col<=num-row; col++){
            cout<<" ";
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    half_pyramid(5);

    return 0;
}