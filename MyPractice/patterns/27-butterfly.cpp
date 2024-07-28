#include <iostream>
using namespace std;

void butterfly_pattern(int num) {
    for(int row = 1; row <= num; row++){

        //stars
        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }
        
        // inverted triangle with spaces
        for(int col = 1; col <= 2*num-2*row; col++){
            cout<<"  ";
        }

        //stars

        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }

        cout<<endl;
    }

      //Buttom pattern
    
      for(int row = 1; row <= num; row++){
        
        //stars
        for(int col = 1; col <= num-row; col++){
            cout<<"* ";
        }

        //triangle with spaces

        for(int col = 1; col <= 2*row; col++){
            cout<<"  ";
        }

        //stars

        for(int col = 1; col <= num-row; col++){
            cout<<"* ";
        }
        cout<<endl;
      }
}

int main() {
    int num, colNum;
    cout << "Enter the number to make butterfly pattern : " << endl;
    cin >> num ;

    butterfly_pattern(num);
    
    return 0;
}


// OUTPUT:
// N=10

        // *                                     * 
        // * *                                 * * 
        // * * *                             * * * 
        // * * * *                         * * * * 
        // * * * * *                     * * * * * 
        // * * * * * *                 * * * * * * 
        // * * * * * * *             * * * * * * * 
        // * * * * * * * *         * * * * * * * * 
        // * * * * * * * * *     * * * * * * * * * 
        // * * * * * * * * * * * * * * * * * * * * 
        // * * * * * * * * *     * * * * * * * * * 
        // * * * * * * * *         * * * * * * * * 
        // * * * * * * *             * * * * * * * 
        // * * * * * *                 * * * * * * 
        // * * * * *                     * * * * * 
        // * * * *                         * * * * 
        // * * *                             * * * 
        // * *                                 * * 
        // *                                     * 