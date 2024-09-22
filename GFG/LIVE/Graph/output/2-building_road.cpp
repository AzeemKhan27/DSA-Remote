#include <iostream>

using namespace std;

const int N=1e5+1;

vector<int> g[N] ;

vector<int>vis(N,0);

void dfs(int s)

{

  vis[s] = 1;

  for (auto ng : g[s])

  {

    if (!vis[ng])

    {

      dfs(ng);

    }

  }

}

 

void solve()

{

  int n, m;

  cin >> n >> m;

  for (int i = 0; i < m; i++)

  {

    int x, y;

    cin >> x >> y;

    g[x].push_back(y);

    g[y].push_back(x);

  }

  vector<int>ans;

  for(int i=1;i<=n;i++){

    if(vis[i]==0){

      dfs(i);

      ans.push_back(i);

    }

  }

  cout<<ans.size()-1<<"\n";

  for(int i=0;i<ans.size()-1;i++){

    cout<<ans[i]<<" "<<ans[i+1]<<"\n";

  }
}