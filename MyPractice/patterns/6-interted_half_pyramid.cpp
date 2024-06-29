#include <iostream>
using namespace std;

void inverted_half_pyramid(int num) {
     
    //  for(int row=1; row<=num; row++){
       
    //     for(int col=num; col>=row; col--){       // Approach 1
    //         cout<<"* ";
    //     }
    //      cout<<endl;
    //  }
    

    for(int row=1; row<=num; row++){                 // Aproach-2

        for(int col=1; col<=num-row; col++){
            cout<<"* ";
        }
        cout<<endl;
        
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a inverted-half_pyramid shape by stars: " << endl;
    cin >> num; 

    inverted_half_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 8
// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 