#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 class Solution {

    public:

    int countBuildings(vector<int> &height){
        int count_sum = 1;
        int firstLeftBuildings = height[0];

        for(int i=1; i<height.size(); i++){
            if(firstLeftBuildings < 0 && firstLeftBuildings < height[i]){
                count_sum += 1;
                firstLeftBuildings = height[i];
            }
        }

        return count_sum;
    }
 }

int main(){
    int t;
    cin>>t;
    cin.ignore(); // Ignores the newline character after integer input

    while(t--){
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while(ss >> num){
            height.push_back(num);
        }

        Solution obj;
        int ans = ob.countBuildings(height);
        cout<<ans<<endl;
    }

    return 0;
}