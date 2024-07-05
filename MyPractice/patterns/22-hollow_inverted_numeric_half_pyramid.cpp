#include <iostream>
using namespace std;

void hollow_inverted_numeric_half_pyramid(int num) {

   for(int row=1; row<=num; row++){
    
        //Number
        for(int col=row; col <= num; col++){

         if(col == num || col == row || row == 1){
             cout<<col <<" ";
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
    cout << "Enter the number of num to make hollow_inverted_numeric_half_pyramid : " <<endl;
    cout<<endl;
    // cin >> num; 

    hollow_inverted_numeric_half_pyramid(5);
    
    return 0;
}


//OUTPUT :-
