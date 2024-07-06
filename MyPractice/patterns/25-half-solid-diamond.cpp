#include <iostream>
using namespace std;

void half_solid_diamond(int num) {

   for(int row = 1; row <= num; row++){

            for(int col=1; col<=row; col++){
                cout<<"*";
            }
              cout<<endl;

        }
       

    for(int row=1; row<=num; row++){
        //  for(int col=num-row; col>=1; col--){
        //         cout<<"*";
        //     }

        //OR

        for(int col=1; col<=num-row; col++){
            cout<<"*";
        }

            cout<<endl;
    }

   }
   

int main() {
    int num;
    cout << "Enter the number of num to make half_solid_diamond : " <<endl;
    cout<<endl;
    // cin >> num; 

    half_solid_diamond(10);
    
    return 0;
}


//OUTPUT :-


        // *
        // **
        // ***
        // ****
        // *****
        // ******
        // *******
        // ********
        // *********
        // **********
        // *********
        // ********
        // *******
        // ******
        // *****
        // ****
        // ***
        // **
        // *