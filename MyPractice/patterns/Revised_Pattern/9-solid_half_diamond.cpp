#include<iostream>
using namespace std;

void solid_half_diamond(int num) {
    
    for(int row=1; row<=num; row++){

        for(int col=1; col<=row; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
       
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 
    solid_half_diamond(6);

    return 0;
}