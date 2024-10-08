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


//JavaScript Code 

class Solution {
    maxLength(str) {
        
        let stack = []; //Stack ke indice ko store krne k liye
        
        // initial boundary ko handle krne ke liye -1 push kiya.
        stack.push(-1);
        
        //variable ko store max val subString len
        
        let maxLength = 0;
        
        //String ko iterate krna
        for(let i=0; i<str.length; i++){
            
            if(str[i] === '('){
                stack.push(i);   //agr milta h tu uska index stack me push krdo
             }
             
             else{
                 stack.pop();   //agr ')' milta h tu "pop" krdonga
                 
                 if(stack.length === 0){
                     stack.push(i);   //agr stack empty ho gaya tu curr index ko boundary mark krne k liye push krdonga
                 }
                 else{
                     //Valid substring ka length calculate kronga
                     maxLength = Math.max(maxLength,i-stack[stack.length - 1]);
                 }
             }
             
        }
        
        return maxLength;
    }
}