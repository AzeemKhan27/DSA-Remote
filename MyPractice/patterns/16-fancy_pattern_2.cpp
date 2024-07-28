#include <iostream>
using namespace std;

void facny_pattern_2(int num) {
   
      for(int row=1; row<=num; row++){
        
        //fancy pattern
        for(int col=1; col<=row; col++){
            cout<<row;
            if(col != row){
                cout<<"*";
            }
        }

        cout<<endl;
      }

      for(int row=1; row<=num; row++){
        
         //fancy pattern
        int current_row = num - row + 1;
        for(int col=1; col<=current_row; col++){
            cout<<current_row;
            if(col != current_row){
                cout<<"*";
            }
        }

        cout<<endl;
      }

    }         

int main() {
    int num;
    cout << "Enter the number of num to make fancy pattern-II : " << endl;
    cin >> num; 

    facny_pattern_2(num);
    
    return 0;
}


// //OUTPUT :
//row = 6
            // 1
            // 2*2
            // 3*3*3
            // 4*4*4*4
            // 5*5*5*5*5
            // 6*6*6*6*6*6
            // 6*6*6*6*6*6
            // 5*5*5*5*5
            // 4*4*4*4
            // 3*3*3
            // 2*2
            // 1