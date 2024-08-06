#include<iostream>
#include<vector>

using namespace std;

int searchArray(const vector<int>& v, int x) {
    for(size_t i=0; i<v.size(); i++){
        if(v[i] == x){
        return i;
        }
    }
    return -1;
}

int main(){
    vector<int>v = {1,2,3,4,5};
    int x;
    
    cout<<"Enter the number to search : ";
    cin>>x;

    int index = searchArray(v,x);
    
    if(index != -1){
        cout << "Searched Number " << index << endl;
    } else {
        cout << "Searched Number "  << -1 << endl;
    }
 
    return 0;
}