#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int nge[n];
    stack<int> st;
    
     for(int i=n-1; i>0 ;i--){
        if(st.empty()) {
            st.push(i);
        } else {
            int last = a[st.top()];
            
            if(last > a[i]) {
                st.push(i);
            } else {
                while(!st.empty() && a[st.top()] <= a[i]) {
                    nge[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
    }
    
    while(!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }
    
    for(int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }
}
