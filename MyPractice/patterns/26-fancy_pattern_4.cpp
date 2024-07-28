#include <iostream>
using namespace std;

void fancy_pattern_4(int num) {

    int curr_number = 1;
    int total_rows = 2 * num - 1;

        for(int row = 1; row <= num; row++){
            
            for(int col = 1; col <= row; col++){
                cout<<curr_number;
                if(col!=row){
                    cout<<"*";
                }
                curr_number += 1;
                
            }
               cout<<endl;
        }

        // Lower Part

        for(int row = num; row >= 1; row--){
            curr_number -= row;
            for(int col=1; col<=row; col++){
                cout<<curr_number;
                if(col != row){
                    cout<<"*";
                }
                curr_number += 1;
            }
            curr_number -= row;
            cout<<endl;
        }
     
   
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make fancy_pattern_4 : " <<endl;
    cout<<endl;
    cin >> num; 

    fancy_pattern_4(num);
    
    return 0;
}

// OUTPUT :
// N=4

            // 1
            // 2*3
            // 4*5*6
            // 7*8*9*10
            // 7*8*9*10
            // 4*5*6
            // 2*3
            // 1


// N=5 


            // 1
            // 2*3
            // 4*5*6
            // 7*8*9*10
            // 11*12*13*14*15
            // 11*12*13*14*15
            // 7*8*9*10
            // 4*5*6
            // 2*3
            // 1