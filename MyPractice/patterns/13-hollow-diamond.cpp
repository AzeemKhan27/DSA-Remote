#include <iostream>
using namespace std;

void hollow_diamond_pyramid(int num) {
     

    for(int row=1; row<=num; row++){  

       // spaces
       for(int col=1; col <= num-row; col++){
          cout<<"  ";
       }
  
            
       // stars
       for(int col=1; col<=2*row-1; ++col){
        if(col == 1 || col == 2*row-1){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
       }

      
       cout<<endl;
    }         

    // bottom part

    for(int row=num-1; row>=1; row--){
        
        //Spaces
        for(int col=1; col<=num-row; col++){
            cout<<"  ";
        }

        //stars and Spaces
        for(int col=1; col<=2*row-1; col++){
            if(col==1 || col==2 * row - 1){
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
    cout << "Enter the number of num to make hollow diamond : " << endl;
    cin >> num; 

    hollow_diamond_pyramid(num);
    
    return 0;
}


// //OUTPUT :
//row = 9
//               * 
//             *   * 
//           *       * 
//         *           * 
//       *               * 
//     *                   * 
//   *                       * 
// * * * * * * * * * * * * * * * 