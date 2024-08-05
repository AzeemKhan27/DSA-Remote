#include <iostream>
using namespace std;
using ll =  long long;

int main() {
	
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    int p[n];
    p[0]=a[0];
    for(int i=1; i<n; i++){
        p[i]=p[i-1]+a[i];
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int l, r;
        cin>>l>>r;
        int sum = 0;
    //     for(int j=0; j<r; j++){
    //         sum+=a[j];
    // }
    sum=p[r];
    if(l>0){
      sum=sum-p[l-1];
    }
    cout<<sum<<" "<<endl;
    return 0;   
    }
}