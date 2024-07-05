#include <iostream>
using namespace std;

void hollow_numeric_half_pyramid(int num) {

   for(int row=1; row<=num; row++){
    
        //Number
     for(int col=1; col<=row; col++){
       
       if(col == 1 || row == num || row == 1 || col == row){
         cout<<col<<" ";
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
    cout << "Enter the number of num to make hollow_numeric_half_pyramid : " <<endl;
    cout<<endl;
    cin >> num; 

    hollow_numeric_half_pyramid(num);
    
    return 0;
}


//OUTPUT :-


            // 1 
            // 1 2 
            // 1   3 
            // 1     4 
            // 1       5 
            // 1         6 
            // 1           7 
            // 1             8 
            // 1               9 
            // 1 2 3 4 5 6 7 8 9 10