#include <iostream>
using namespace std;

void hollow_square(int num) {

    for(int row=1; row<=num; row++){
        
        //print star
        for(int col=1; col<=num; col++){
           if(col==1 || row==1 || row == num || col == num){
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
    cout << "Enter the number of num to make hollow square : " <<endl;
    cin >> num; 

    hollow_square(num);
    
    return 0;
}