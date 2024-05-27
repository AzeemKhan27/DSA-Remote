#include<iostream>
#include<cmath>
using namespace std;

int Bishop(int A, int B){
   int count = 0;
   count += min(8-A,8-B);
   count += min(8-A,B-A);
   count += min(A-1, B-1);
   count += min(A-1,8-B);

   return count;
}
int main(){
    int A,B;
    cout>>"Enter Numbers :" <<endl;
    cin>>A>>B;

    cout<<"Total Moves Bishop :  " <<Bishop(A,B) <<endl;
    return 0;
}