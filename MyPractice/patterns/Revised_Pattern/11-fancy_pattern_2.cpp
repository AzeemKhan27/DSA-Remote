#include<iostream>
using namespace std;

void fancy_pattern_2(int n) {

     // print 1st row star
           cout<<"*"<<endl;
    
    for(int i=0; i<n; i++){
        int cond = i <= n/2 ? 2*i : 2*(n-i-1);  // this condition for row wise growing face : i <= n/2 ,  row-wise-shirinking face thinking condition :  2*i : 2*(n-i-1)

        // print stars in starting :

            cout<<"*";
 
        for(int j=0; j<=cond; j++){
            if(j<=cond/2){
                cout<<j+1;
            }
            else{
                cout<<cond-j+1;
            }
        }

        // print stars in ending:

        cout<<"*";

        cout<<endl;
    }

    // last row star
    cout<<"*"<<endl;
   
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    cin >> num; 

    fancy_pattern_2(num);

    return 0;
}


// n=10

// *
// *1*
// *121*
// *12321*
// *1234321*
// *123454321*
// *12345654321*
// *1234321*
// *12321*
// *121*
// *1*
// *