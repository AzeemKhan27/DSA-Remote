// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> G[numberOfNodes+1];

// void dfs(int s){
//     vis[s] =1;
    
//         if(vis[e] != 1){
//             dfs(e);
//         }
//     }
// }

// // Iss Code ko ratna hi hai

// int main(){
//     int numberOfNodes,numberOfEdges;

//     cin>>numberOfNodes>>numberOfEdges;

//     vector<int> G[numberOfNodes+1];

//     for(int i=0;i<numberOfEdges;i++){

//         int x,y;

//         cin>>x>>y;

//         G[x].push_back(y);

//         G[y].push_back(x);

//     } 

//     // Print the elements

//     for (int i = 1; i <=numberOfNodes; ++i) {

//         cout << "[" << i << "]: ";

//         for (const auto& elem : G[i]) {

//             cout << elem << " ";

//         }

//         cout << endl;

//     }

 

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[100001];  
vector<bool> visited(100001, false);  

// DFS to find all cities in the current connected component
void dfs(int node, vector<int>& component) {
    visited[node] = true;
    component.push_back(node);
    
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, component);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    // Input all roads
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<vector<int>> components;

    // Find all connected components
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, component);  // Perform DFS to get all nodes in this component
            components.push_back(component);
        }
    }

    // If more than one component exists, we need to connect them
    int numberOfNewRoads = components.size() - 1;
    cout << numberOfNewRoads << endl;

    // Print the roads that need to be added to connect all components
    for (int i = 0; i < components.size() - 1; i++) {
        cout << components[i][0] << " " << components[i + 1][0] << endl;
    }

    return 0;
}
