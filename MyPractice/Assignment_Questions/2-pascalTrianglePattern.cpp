#include <iostream>
using namespace std;

void pascal_triangle_pattern(int num) {

   for(int row = 1; row <= num; row++){

    int C = 1;
        for(int col=1; col<=row; col++){
                cout<<C<<" ";
                C = C * (row - col) / col;
            }
        
             cout<<endl;
        }
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make pascal pattern : " <<endl;
    cout<<endl;
    cin >> num; 

    pascal_triangle_pattern(num);
    
    return 0;
}


//OUTPUT :-


// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 

