#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int recDiceWays(int curr_sum){
    if(curr_sum < 0) return 0;
    if(curr_sum == 0) return 1;

    int sum = 0;
    for(int d = 1; d <= 6; d++){
        if(d>curr_sum) {
            break;
        }
        
        sum += recDiceWays(curr_sum - i);
    }

    return sum;
}

int main(){
    int ans = 0;


}