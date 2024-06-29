#include <iostream>
using namespace std;

void inverted_full_pyramid(int num) {
     

    for(int row=1; row<=num; row++){                 // Aproach-1

        //Spaces
        for(int col=0; col<=row-1; col++){
            cout<<" ";
        }
        //Stars
        for(int col=1; col<=num-row; col++){
            cout<<" *";
        }
        cout<<endl;
        
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a inverted full pyramid shape by stars: " << endl;
    cin >> num; 

    inverted_full_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 9

//   * * * * * * * *
//    * * * * * * *
//     * * * * * *
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *