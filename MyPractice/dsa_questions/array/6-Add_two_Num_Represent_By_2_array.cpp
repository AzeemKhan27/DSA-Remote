#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For reverse function

using namespace std;

// Function to calculate the sum of two arrays as strings
string calc_Sum(vector<int>& a, vector<int>& b) {
    int carry=0;
       string ans;
       int i = a.size() - 1;
       int j = b.size() - 1;
       
       //if number of digits and length are same.
       while(i>=0 && j>=0){
         int x = a[i] + b[j] + carry;
         int digit = x%10;
         ans.push_back(digit + '0'); //we have to use '0' to convert digit into string/char.
         carry = x/10;
         i-- , j--; // jb ekbar i,j ko man liya h tu, i--,j-- karna padega.
       }
       
       //if number of "A" array digits and length was more then "B" array
       
       while(i>=0){
           int x = a[i] + 0 + carry;
           int digit = x%10;
           ans.push_back(digit + '0');
           carry = x/10;
           i--; //yha pe i-- krna padega
       }
       
       //if number "B" array digits and length was more then "A" array.
       
       while(j>=0){
           int x = 0 + b[j] + carry;
           int digit = x%10; 
           ans.push_back(digit + '0');
           carry = x/10;
           j--;     //yaha pe j-- krna pdega.
       }
       
       // carry bacha hua hai tu mujhe carry bhi push back krna pdega.
       
       if(carry){
           ans.push_back(carry + '0');
       }
       
       //last k saare '0' ko pop kr denge reverse krne se pehle hi. 
       //kyuki reverse k baad '0' starting me aajayega or starting me '0' ki koi value ni hoti h.
       
       while(ans[ans.size()-1] == '0'){
           ans.pop_back();
       }
       
       //answer ulta chahiye tu reverse kr denge.
       
       reverse(ans.begin(),ans.end());
       
       return ans;
}

int main() {
    // Test case
    vector<int> arr1 = {9, 9, 9};  // Represents the number 999
    vector<int> arr2 = {1};        // Represents the number 1

    // Calculate the sum of arr1 and arr2
    string result = calc_Sum(arr1, arr2);

    // Output the result
    cout << "Sum: " << result << endl;  // Expected output: "1000"

    return 0;
}