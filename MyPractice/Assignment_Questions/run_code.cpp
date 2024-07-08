
#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout<<(++a)*(++a) <<endl;   // Output : 49, because 1) ++a = 6 then 2) ++a = 7, here two pre=increment working. so 7*7=49
}