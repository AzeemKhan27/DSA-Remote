#include<iostream>
#include<vector>

using namespace std;

int insertElementInArray(const vector<int>& v, int x, int n, int cap, int pos) {
    if(n == cap) {
        return n;
    }

    int idx = pos - 1;

    for(int i=n-1; i>=idx; i--){
        v[i+1] = v[i];
    }
    v[idx] = x;

    return (n+1);
    
}

int main(){
    vector<int>v = {1,2,3,4,5};
    int x,pos;
    
    cout<<"Enter the number to insert : ";
    cin>>x;

    cout << "Enter the position to insert at: ";
    cin >> pos;

    insertElementInArray(v,x,pos);

    cout << "Updated vector: ";
    for (int i : v) {
        cout << i << " ";
    }
 
    return 0;
}