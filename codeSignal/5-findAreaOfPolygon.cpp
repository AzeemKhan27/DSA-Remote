#include <iostream>
#include <vector>
#include <algorithm> // for max
#include <limits>    // for INT_MIN

using namespace std;

int finAreaOfPolygon(int n){
    //Apply the formula : n^2 + (n-1)^2
    return n*n + (n-1) * (n-1);   //2^2 + 1^2;
}

int main(){
  int n = 3;
  cout<<"Area of the "<<n <<" - interesting polygon is : "<<finAreaOfPolygon(n)<<endl;
  return 0;
}

