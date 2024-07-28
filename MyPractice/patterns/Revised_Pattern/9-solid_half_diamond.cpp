#include<iostream>
using namespace std;

// void solid_half_diamond(int num) {
    
//     for(int row=1; row<=num; row++){

//         for(int col=1; col<=row; col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
       
//     }

//     for(int i=1; i<num; i++){
//         for(int j=1; j<=num-i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

void solid_half_diamond(int n) {
    
    for(int row=1; row<=2*n-1; row++){
           
          double condition = row <= n ? row : n - (row%n) ;

          for(int col=1; col<=condition; col++){
               cout<<"*";
          }

          cout<<endl;
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 
    solid_half_diamond(5);

    return 0;
}