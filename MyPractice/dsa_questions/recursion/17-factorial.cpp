#include <iostream>
using namespace std;

int fact(int n){
    if(n==0) 
    return 1;
    
    return n*fact(n-1);
}

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n<0){
        cout << "Error: Input must be a positive integer." << endl;
        return 0;
    }

    int facts = fact(n);

    cout<<"Factorial is = "<<facts;
}