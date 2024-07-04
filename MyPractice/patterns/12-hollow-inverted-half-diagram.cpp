#include <iostream>
using namespace std;

void inverted_half_pyramid(int num) {
     

    for(int row=0; row<num; row++){  

       
                for(int col=0; col<num; col++){
              
                  if(row == 0 || col == 0 || col == num-row-1){
                      cout<<"* ";
                  }
                  else{
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