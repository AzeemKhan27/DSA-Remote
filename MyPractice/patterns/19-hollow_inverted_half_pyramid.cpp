#include <iostream>
using namespace std;

void hollow_inverted_half_pyramid(int num) {

    for(int row=1; row<=num; row++){
        
        for(int col=1; col<=num-row+1; col++){
            
            if(col == 1 || row == 1 || col == num - row + 1){
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
    cout << "Enter the number of num to make hollow_inverted_half_pyramid : " <<endl;
    cin >> num; 

    hollow_inverted_half_pyramid(num);
    
    return 0;
}


//OUTPUT :-

                    // * * * * * * * * * * 
                    // *               * 
                    // *             * 
                    // *           * 
                    // *         * 
                    // *       * 
                    // *     * 
                    // *   * 
                    // * * 
                    // * 