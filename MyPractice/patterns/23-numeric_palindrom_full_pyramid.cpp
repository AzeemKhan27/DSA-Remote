#include <iostream>
using namespace std;

void numeric_palindrom_full_pyramid(int num) {

   for(int row = 1; row <= num; row++){

            //spaces
            for(int col = 1; col <= num-row; col++){
                cout<<"  ";
            }

            //incresing numbers right half pyramid

            for(int col=1; col<=row; col++){
                cout<<col<<" ";
            }

            //decreasing numbers left half pyramid

            // for(int col=row-1; col>=1; col--){
            //     cout<<col<<" ";
            // }

            // OR

            for(int col = 1; col <= row-1; col++){
                cout<<(row - col)<<" ";
            }

             cout<<endl;

        }
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make numeric_palindrom_full_pyramid : " <<endl;
    cout<<endl;
    cin >> num; 

    numeric_palindrom_full_pyramid(num);
    
    return 0;
}


//OUTPUT :-

//                   1 
//                 1 2 1 
//               1 2 3 2 1 
//             1 2 3 4 3 2 1 
//           1 2 3 4 5 4 3 2 1 
//         1 2 3 4 5 6 5 4 3 2 1 
//       1 2 3 4 5 6 7 6 5 4 3 2 1 
//     1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 
//   1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 