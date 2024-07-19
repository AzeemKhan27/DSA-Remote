#include<iostream>
using namespace std;

bool checkNumberOddOrEvent(int n){
    // if(n % 2 == 0){

    //using Bitwise and Efficient Code : 
    if((n & 1) == 0){
        return true;
    }
    else{
        return false;
    }


}

int main(){
    int number;
    cout<<"enter the number to check odd or even number : "<<endl;
    cin>>number;

    bool isEven = checkNumberOddOrEvent(number);

    cout<< number << (isEven ? " is Even number: " : " is Odd number: ") <<endl;

    // if(isEven){
    //     cout<<number<<" is Even number. \n";
    // }
    // else{
    //     cout<<number<<" is Odd number. \n";
    // }
    
    return 0;

}