#include <iostream>
using namespace std;

void flibbed_solid_diamond(int num) {
     
       //Upper:
        for(int row=1; row<=num; row++){

            //print stars
            for(int col=1; col<=num-row+1; col++){
                cout<<" *";
            }
          
           //Spaces
           for(int col=1; col <= 2*row-2 ; col++){
              cout<<"  ";   
           }
                 
           // stars

           for(int col=1; col <= num-row+1; col++){
                cout<<" *"; 
           }    

           cout<<endl; 
        }

        // Bottom code :

        for(int row=1; row <= num; row++){
            
            //stars
            for(int col=1; col <= row; col++){
                cout<<" *";
            }
            
            //spaces
            for(int col=1; col<=2*num-2*row; col++){
                cout<<"  ";
            }

            //stars
            for(int col = 1; col <= row; col++){
                cout<<" *";
            }
            cout<<endl;
        }
  
    }         

int main() {
    int num;
    cout << "Enter the number of num to make flibbed solid diamond : " << endl;
    cin >> num; 

    flibbed_solid_diamond(num);
    
    return 0;
}


// //OUTPUT :
//row = 9
//  * * * * * * * * * *
//  * * * *     * * * *
//  * * *         * * *
//  * *             * *
//  *                 *
//  *                 *
//  * *             * *
//  * * *         * * *
//  * * * *     * * * *