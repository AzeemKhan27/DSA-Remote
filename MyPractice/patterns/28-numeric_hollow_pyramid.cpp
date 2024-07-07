#include <iostream>
using namespace std;

void numeric_hollow_pyramid(int num) {
     

    for(int row=1; row<=num; row++){                 // Aproach-1


        //Spaces

        for(int col=1; col<=num-row; col++){
            cout<<" ";
        }

        for(int col=1; col<=row; col++){
            if(col==1 || row == num){
                cout<<col << " ";
            }
            else{
                cout<<" ";
            }
        }

        //right side num

        for(int col=2; col<=num-1; col++){

            if(col==row ){
                cout<<col<<" ";
            }
            else{
                cout<<" ";
            }
        }
       
        cout<<endl;
        
    }          
   
}

int main() {
    int num;
    cout << "Enter the number of rows and columns to make a numeric_hollow_pyramid shape by stars: " << endl;
    cin >> num; 

    numeric_hollow_pyramid(num);
    
    return 0;
}


//OUTPUT :

        //          1         
        //         1  2        
        //        1    3       
        //       1      4      
        //      1        5     
        //     1          6    
        //    1            7   
        //   1              8  
        //  1                9 
        // 1 2 3 4 5 6 7 8 9 10         