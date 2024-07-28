#include<iostream>
using namespace std;

void inverted_triangle(int num) {
    for(int row=1; row<=num; row++){
        //space
        for(int col=1; col<=row; col++){
            cout<<" ";
        }
        for(int col=1; col<=num-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    // cin >> num; 

    inverted_triangle(5);

    return 0;
}



//  * * * * 
//   * * * 
//    * * 
//     * 
     