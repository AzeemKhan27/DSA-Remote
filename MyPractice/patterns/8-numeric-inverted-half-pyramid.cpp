#include <iostream>
using namespace std;

void numeric_inverted_half_pyramid(int num) {
     

    for(int row=1; row<=num; row++){                 // Aproach-1

        for(int col=row; col<=num-row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
        
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a numeric_inverted_half_pyramid shape by stars: " << endl;
    cin >> num; 

    numeric_inverted_half_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 6
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6