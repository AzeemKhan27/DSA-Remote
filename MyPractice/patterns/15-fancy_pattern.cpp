#include <iostream>
using namespace std;

void facny_pattern(int num) {
   
      for(int row=1; row<=num; row++){
        
        //fancy pattern
        for(int col=1; col<=row; col++){
            cout<<col;
            if(col != row){
                cout<<"*";
            }
        }

        cout<<endl;
      }

      for(int row=1; row<=num; row++){
        
        //fancy pattern
        for(int col=1; col<=num-row; col++){
            cout<<col;
            if(col != row){
                cout<<"*";
            }
        }

        cout<<endl;
      }

    }         

int main() {
    int num;
    cout << "Enter the number of num to make fancy pattern : " << endl;
    cin >> num; 

    facny_pattern(num);
    
    return 0;
}


// //OUTPUT :
//row = 9
// 1
// 1*2
// 1*2*3
// 1*2*3*4
// 1*2*3*4*5
// 1*2*3*4*5*6
// 12*3*4*5*
// 1*23*4*
// 1*2*3
// 1*2*
// 1*