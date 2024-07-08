
#include<iostream>
using namespace std;

int main(){

    int val;
    cout<<"Enter the value : "<<endl;

    cin>> val;

    switch(val){
        case 1: cout<<"Elon musk";
        break;
        case 2: cout<<"Jeff bezos";
        break;
        case 3: cout<<"Azeem Khan";
        break;
        case 4: cout<<"Taylor Swift";
        break;

        default : cout<<"Azeem Pathan";
    }
}