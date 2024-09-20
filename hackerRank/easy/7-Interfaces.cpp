#include <iostream>
#include <stdexcept>
#include <cmath>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>
#include <cstdio>

using namespace std;

//Interface declaration

class AdvancedArithmetic {
    public : 
        virtual int divisorSum(int n) = 0; //Pure virtual function
};

//Calculator class implementation
class Calculator : public AdvancedArithmetic{
    public : 
        int divisorSum(int n){
            int sum = 0;
            for(int i=0; i<n; i++){
                if(n % i == 0) {
                    sum += i;
                }
            }
            return sum;
        }
};

int main(){
   int n;
   cin>>n;

   Calculator myCalculator; // Create Calculator Instance
   cout<<"I implemented: AdvancedArithmetic"<<endl;
   cout<<myCalculator.divisorSum(n)<<endl;

   return 0;
}