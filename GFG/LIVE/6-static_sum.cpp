#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>

using namespace std;

const int N=21;
int a[N];
int n;
void rec(int g1,int g2,int cur,int &ans){
    if(cur==n){
        ans=min(ans,abs(g1-g2));
        return;
    }
    rec(g1+a[cur],g2,cur+1,ans);
    rec(g1,g2+a[cur],cur+1,ans);
}
int main()
{
   int n;
   cout<<"Enter the N number : "<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int ans=INT_MAX;
   rec(0,0,0,ans);
   cout<<ans <<" : ";
    
    return 0;
}