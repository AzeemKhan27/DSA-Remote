#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> statues){

    //Step-1: Sort the statues array

    sort(statues.begin(), statues.end());

    //Step-2: Find Smallest and Largest Size
    int smallest = statues[0];
    int largest = statues[statues.size() - 1];

    //Step-3: Calculate the number of additional statues needed
    int additional = (largest-smallest+1) - statues.size();

    return additional;
}

int main(){
    vector<int> statues = {6,2,3,5};
    cout << "Additional statues needed: " << solution(statues) << endl;
    return 0;
}