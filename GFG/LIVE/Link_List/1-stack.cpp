#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]; 
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int nge[n];
    stack<int>st;

    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(i);
        }
        else{
            // last one is greater last 5 cur=4
            int last=a[st.top()];
            if(last>a[i]){
                st.push(i);
            }
            else{
                // last one is smaller or equal last = 5 cur=6
                while(!st.empty()&&a[st.top()]<=a[i]){
                    // cout<<st.top()<<" --> "<<a[i]<<"\n";
                    nge[st.top()]=a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
    }
    while(!st.empty()){
        // cout<<st.top()<<" --> "<<-1<<"\n";
        nge[st.top()]=-1;
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

}