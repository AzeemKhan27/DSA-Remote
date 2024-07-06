#include <iostream>
using namespace std;

void fancy_pattern_3(int num) {

   for(int row = 1; row <= num; row++){

            //Stars
            for(int col=1; col<=num+4-row; col++){
                cout<<"* ";
            }
            
            //Numbers
            for(int col=1; col<=row; col++){
                cout<<row<<" ";
                if(col != row){
                    cout<<"* ";
                }
            }

             //Stars
            for(int col=1; col<=num+4-row; col++){
                cout<<"* ";
            }

             cout<<endl;

        }
   }
   

int main() {
    int num;
    cout << "Enter the number of num to make fancy_pattern_3 : " <<endl;
    cout<<endl;
    cin >> num; 

    fancy_pattern_3(num);
    
    return 0;
}


//OUTPUT :-
