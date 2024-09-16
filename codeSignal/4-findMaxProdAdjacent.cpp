#include <iostream>
#include <vector>
#include <algorithm> // for max
#include <limits>    // for INT_MIN

using namespace std;

int solution(vector<int> inputArray){
    //Ensure the inout has atleast 2 ele as per the prob constraints.
    if(inputArray.size() < 2){
        return 0;
    }

    //Initialize maxProduct to the smallest possible integer to handle negative products
    int maxProduct = numeric_limits<int>::min();

    //Loop through the array and calculate the product of adjacents dynamically

    for(long i=0; i<inputArray.size(); i++){
        int product = inputArray[i] * inputArray[i+1];
        maxProduct = max(maxProduct, product);
    }

    return maxProduct;  // return the maximum product found.

}

int main() {
    vector<int> inputArray = {9, 5, 10, 2, 24, -1, -48};
    cout << "Max adjacent product: " << solution(inputArray) << endl;
    return 0;
}