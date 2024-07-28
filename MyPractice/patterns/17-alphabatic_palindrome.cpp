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
    cin >> num; 

    alpha_palindrome(num);
    
    return 0;
}


// //OUTPUT :
//row = 6

        // A 
        // A B A 
        // A B C B A 
        // A B C D C B A 
        // A B C D E D C B A 
        // A B C D E F E D C B A 