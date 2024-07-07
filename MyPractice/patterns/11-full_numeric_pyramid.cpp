#include <iostream>
using namespace std;

void numeric_full_pyramid(int num) {
     

    for(int row=1; row<=num; row++){                 // Aproach-1

        //Spaces

        for(int col=1; col<=num-row; col++){
            cout<<"   ";
        }
        
        //Make numeric half pyramid.

        // for(int col=2*row-row; col<=2*row-1; col++){  // both are working
        for(int col=row; col<=2*row-1; col++){
            cout<<col<<"  ";
        }


        //left numeric pyramid

        for(int col=2*row-2; col>=row; col--){
            cout<<col<<"  ";
        }
           cout<<endl;
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a numeric full pyramid shape by stars: " << endl;
    cin >> num; 

    numeric_full_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 9

        //             1  
        //          2  3  2  
        //       3  4  5  4  3  
        //    4  5  6  7  6  5  4  
        // 5  6  7  8  9  8  7  6  5  