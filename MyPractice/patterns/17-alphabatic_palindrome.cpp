#include <iostream>
using namespace std;

void alpha_palindrome(int num) {

      for(int row = 1; row <= num; row++){

        char alpha_letter = 'A';

        //Letters  in increasing order:
        for(int col = 1; col <= row; col++){
            cout<<(char)(alpha_letter + col - 1) <<" ";
        }

        for(int col = 1; col <= row-1; col++){
            cout<<(char)(alpha_letter + row - col - 1) <<" ";
        }

        cout<<endl;
      }   

}      

int main() {
    int num;
    cout << "Enter the number of num to make alphabetic palindrome : " <<endl;
    // cin >> num; 

    alpha_palindrome(6);
    
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