#include <iostream>
using namespace std;

void hollow_full_pyramid(int num) {

   for(int row = 1; row <= num; row++){

    //Spaces
    for(int col = 1; col <= num-row; col++){
        cout<<"  ";
    }
    
    //stars
    for(int col = 1; col <= 2*row-1; col++ ){
        
        if(col == 1 || col == 2*row-1 || row == num){
            cout<<" *";
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
    cout << "Enter the number of num to make hollow_full_pyramid : " <<endl;
    cout<<endl;
    cin >> num; 

    hollow_full_pyramid(num);
    
    return 0;
}


//OUTPUT :-

//                    *
//                  *   *
//                *       *
//              *           *
//            *               *
//          *                   *
//        *                       *
//      *                           *
//    *                               *
//  * * * * * * * * * * * * * * * * * * *
