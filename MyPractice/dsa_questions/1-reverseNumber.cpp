#include <iostream>
using namespace std;

void reverseNumber(int num) {

       int n = num;

       while(n>0){
        int rem = n % 10;
        cout<<rem;
        n/=10;
       }
       cout<<endl;
}

int main() {
    int num;
    cout << "Enter the number to reverse : " << endl;
    cin >> num; 

    reverseNumber(num);
    
    return 0;
}