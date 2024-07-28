#include <iostream>
using namespace std;

int Kth(int N, int K) {
   
   int mask = 1 << K;
   int ans = N | mask;
   return ans;

}

int main() {
    int num,num1;
    cout << "Enter the number to find Kth: " << endl;
    cin >> num >> num1;

    Kth(num,num1);
    
    return 0;
}