#include<iostream>
using namespace std;

void numeric_palindrom(int num) {
    
    for(int row=1; row<=num; row++){

        for(int col=1; col<=num-row; col++){
            cout<<"  ";
        }

        for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }

        for(int col=row-1; col>=1; col--){
            cout<<col<<" ";
        }

        // for(int col=1; col<=row-1; col++){
        //     cout<<col<<" ";
        // }

        cout<<endl;
       
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    numeric_palindrom(6);

    return 0;
}