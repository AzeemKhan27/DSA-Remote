#include<iostream>
using namespace std;

void numeric_inverted_hollow_half_pyramid(int num) {
    
    for(int row=1; row<=num; row++){

        for(int col=1; col<=num+1-row; col++){
            
            if(col == 1 || col == num-row+1 || row == 1){
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

    numeric_inverted_hollow_half_pyramid(5);

    return 0;
}