#include<iostream>
using namespace std;

void fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    fibonacci(num);

    return 0;

}