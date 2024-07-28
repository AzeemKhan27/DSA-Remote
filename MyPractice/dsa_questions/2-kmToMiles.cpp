#include <iostream>
using namespace std;

void kmTomiles(int num) {

    int km = num;
    double KilometerToMiles = ((1/1.609) * km);
    cout<<"Miles is = "<< KilometerToMiles <<endl;
}

int main() {
    int num;
    cout << "Enter the number in KM , for convert into miles : " << endl;
    cin >> num; 

    kmTomiles(num);
    
    return 0;
}