#include<iostream>
using namespace std;

void numeric_hollow_half_pyramid(int num) {
    
    for(int row=1; row<=num; row++){

        for(int col=1; col<=row; col++){
            
                if(col==1 || row==num || col == row){
                    cout<<col<<" ";
                }
                else{
                    cout<<"  ";
                }
            
        }
        cout<<endl;
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    numeric_hollow_half_pyramid(5);

    return 0;
}