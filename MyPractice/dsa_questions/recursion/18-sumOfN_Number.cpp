#include <iostream>
using namespace std;

 pow(int num, int n){
  if(n == 1) return num;

  return num * pow(num,n-1);
}

int main(){
    int n=5;
    int num = 2;
    cout<<"Power of 2 is = "<<pow(num,n);

    return 0;
}