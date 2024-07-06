#include <iostream>
using namespace std;

void floyd_triangle_numeric(int num) {

    int curr_number = 1;

        for(int row = 1; row <= num; row++){
            
            for(int col=1; col<=row; col++){
                cout<<curr_number;
                if(col != row){
                    cout<<"*";
                }

                curr_number += 1;
            }
            
               cout<<endl;
        }

       
   
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make floyd_triangle_numeric : " <<endl;
    cout<<endl;
    cin >> num; 

    floyd_triangle_numeric(num);
    
    return 0;
}

// OUTPUT :
// N=4

            // 1
            // 2*3
            // 4*5*6
            // 7*8*9*10
            // 11*12*13*14*15
            // 16*17*18*19*20*21
            // 22*23*24*25*26*27*28