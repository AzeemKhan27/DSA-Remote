#include<iostream>
using namespace std;

void right_pyramid(int num) {

    for(int row=1; row<=num; row++){
        //space
       
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    right_pyramid(5);

    return 0;
}