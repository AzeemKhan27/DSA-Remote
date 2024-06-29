#include <iostream>
using namespace std;

void half_pyramid(int num) {
     
     for(int row=1; row<=num; row++){
       
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
         cout<<endl;
     }
    
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a half_pyramid shape by stars: " << endl;
    cin >> num; // >> colNum;

    // half_pyramid(num, colNum);
    half_pyramid(num);
    
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