#include <iostream>
using namespace std;

void inverted_half_pyramid(int num) {
     

    for(int row=1; row<=num; row++){  

       // spaces
       for(int col=1; col <= num-row; col++){
          cout<<"  ";
       }
  
            
       // stars
       for(int col=1; col<=2*row-1; ++col){
        if(col == 1 || col == 2*row-1 || row == num){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
       }
       cout<<endl;

    }         
    
}

int main() {
    int num;
    cout << "Enter the number of num to make inverted half pyramid : " << endl;
    cin >> num; 

    inverted_half_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 9

// * * * * * * * * * 
// *             *   
// *           *     
// *         *       
// *       *         
// *     *           
// *   *             
// * *               
// *   