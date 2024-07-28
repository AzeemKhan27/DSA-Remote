#include <iostream>
using namespace std;

void hollow_rectangle(int num, int colNum) {
     
     for(int row=1; row<=num; row++){
        for(int col=1; col<=colNum; col++){
            if(col == 1 || col == colNum || row == 1 || row == num){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }
   
}

int main() {
    int num, colNum;
    cout << "Enter the number of rows and columns to make a hollow-rectangle shape by stars: " << endl;
    cin >> num >> colNum;

    hollow_rectangle(num, colNum);
    
    return 0;
}


// //OUTPUT :
// row=8 , col= 15


//   * * * * * * * * * * * * * * * 
//   *                           * 
//   *                           * 
//   *                           * 
//   *                           * 
//   *                           * 
//   *                           * 
//   * * * * * * * * * * * * * * * 