#include <iostream>
using namespace std;

using ll = long long;

int bs(int a[],int n,int x){
  int l=0,r=n-1;
  while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]>x){
      r=mid-1;
    }
    else if(a[mid]<x){
      l=mid+1;
    }
    else{
      return mid;
    }
  }
  return -1;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    
    return 0;
}