#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

int findMaxLen(string str){
    stack<int> st;
    st.push(-1);

    int maxLength = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '('){
            st.push(i);   //Opening Parenthesis
        }
        else{
            st.pop();     //Closing Parenthesis

            if(st.empty()){
                st.push(i);
            }
            else{
                maxLength = max(maxLength, i - st.top());
            }
        }
    }

    return maxLength;
}

int main() {
    string str = ")()())";
    cout << "Longest valid parenthesis length is: " << findMaxLen(str) << endl;
    return 0;
}