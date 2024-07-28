#include <iostream>
using namespace std;

void full_pyramid(int num) {
     

    for(int row=1; row<=num; row++){                 // Aproach-1

        //Spaces
        for(int col=1; col<=num-row; col++){
            cout<<" ";
        }
        //Stars
        for(int col=1; col<=2*row-1; col++){
            cout<<"*";
        }
        cout<<endl;
        
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a full pyramid shape by stars: " << endl;
    cin >> num; 

    full_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 6
//      *
//     ***
//    *****
//   *******
//  *********
// ***********