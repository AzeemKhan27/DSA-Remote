#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits>    
#include <stack>

using namespace std;

bool isBalanced(string x){
    stack<char> st;

    for(int i=0; i<x.length(); i++){
        char ch = x[i];

        //checking opening brackets
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']'){
            if(st.empty()){
                return false;
            }

            char top_element = st.top();
            st.pop();
            

            if(ch==')' && top_element != ')' ||
               ch=='}' && top_element != '{' ||
               ch==']' && top_element!= '['){
                return false;
            }
        }
    }

    return st.empty();
}

int main(){
    string exp;
    cin>>exp;

    if(isBalanced(exp)){
        cout<<"Expression is balanced"<<" ";
    }
    else{
        cout<<"Expression is not balanced"<<" ";
    }

    return 0;
}