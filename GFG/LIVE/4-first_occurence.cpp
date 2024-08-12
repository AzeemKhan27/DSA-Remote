

#include <iostream>
using namespace std;

using ll = long long;

int bs(int a[],int n,int x){
  int l=0,r=n-1;
  int ans=-1;
  while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]>x){
      r=mid-1;
    }
    else if(a[mid]<x){
      l=mid+1;
    }
    else{
      ans=mid;
      r=mid-1;
    }
  }
  return ans;
}

int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the element to search: ";
    cin >> x;

    int a[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = bs(a, n, x);
    if (result != -1) {
        cout << "The first occurrence of " << x << " is at index " << result << "." << endl;
    } else {
        cout << x << " is not found in the array." << endl;
    }

    return 0;
}