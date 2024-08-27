#include<iostream>
using namespace std;

void printEven(int N){

    if(N==2){
        cout<<2<<" ";
        return;
    }
  printEven(N-2);
  cout<<N<<" ";
}

int main(){

    int N;
    cin>>N;
    if(N%2==1)
    N--;

    printEven(N);
}