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
    cin >> num; 

    hollow_inverted_numeric_half_pyramid(num);
    
    return 0;
}


//OUTPUT :-


         // 1 2 3 4 5 6 7 8 9 10 
         // 2               10 
         // 3             10 
         // 4           10 
         // 5         10 
         // 6       10 
         // 7     10 
         // 8   10 
         // 9 10 
         // 10 