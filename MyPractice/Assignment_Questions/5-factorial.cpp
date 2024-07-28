#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int number;
    cout<<"enter the number to find factorial value : "<<endl;
    cin>>number;

    int result = factorial(number);

    cout<<number<<" is factorial : "<<result <<endl;
    
    return 0;

}