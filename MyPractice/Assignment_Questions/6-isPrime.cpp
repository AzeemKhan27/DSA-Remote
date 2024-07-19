#include<iostream>
#include<cmath>

using namespace std;

bool checkisPrime(int n){
   
//    for(int i = 2; i < n; i++){
   for(int i = 2; i < sqrt(n); i++){ // optimize solution
      if(n % i == 0){
         return false;
      }
   }
   return true;


}

int main(){
    int number;
    cout<<"enter the number to check odd or even number : "<<endl;
    cin>>number;

    bool isPrime = checkisPrime(number);

    cout<< number << (isPrime ? " is Prime number: " : " is not Prime number: ") <<endl;

    return 0;

}