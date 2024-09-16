#include<iostream>
#include<vector>
using namespace std;

vector<int> G[numberOfNodes+1];

void dfs(int s){
    vis[s] =1;
    
        if(vis[e] != 1){
            dfs(e);
        }
    }
}

// Iss Code ko ratna hi hai

int main(){
    int numberOfNodes,numberOfEdges;

    cin>>numberOfNodes>>numberOfEdges;

    vector<int> G[numberOfNodes+1];

    for(int i=0;i<numberOfEdges;i++){

        int x,y;

        cin>>x>>y;

        G[x].push_back(y);

        G[y].push_back(x);

    } 

    // Print the elements

    for (int i = 1; i <=numberOfNodes; ++i) {

        cout << "[" << i << "]: ";

        for (const auto& elem : G[i]) {

            cout << elem << " ";

        }

        cout << endl;

    }

 

    return 0;
}