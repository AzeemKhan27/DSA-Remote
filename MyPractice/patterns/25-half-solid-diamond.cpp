#include <iostream>
using namespace std;

void half_solid_diamond(int num) {


    for(int row = 1; row <= 2 * num - 1; row++){

          int stars;
          if(row<=num){
            stars = row;
          }
          else{
            stars = 2 * num - row;
          }

          for(int col=1; col<=stars; col++){
            cout<<"* ";
          }
          cout<<endl;

     }
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make half_solid_diamond : " <<endl;
    cout<<endl;
    // cin >> num; 

    half_solid_diamond(10);
    
    return 0;
}


//OUTPUT :-


        // * 
        // * * 
        // * * * 
        // * * * * 
        // * * * * * 
        // * * * * * * 
        // * * * * * * * 
        // * * * * * * * * 
        // * * * * * * * * * 
        // * * * * * * * * * * 
        // * * * * * * * * * 
        // * * * * * * * * 
        // * * * * * * * 
        // * * * * * * 
        // * * * * * 
        // * * * * 
        // * * * 
        // * * 
        // *        