#include<iostrem>
#include<vector>
#include<algorithm>

using namespace std;

int Rec(int curr_sum, int a[], int n){
    if(curr_sum == 0){
        return 1;
    }

    if(curr_sum < 0){
        return 0;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans + Rec(curr_sum, a[i],a,n);
    }
    
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;

    int res = Rec(sum, a, n);
    cout<<"Number of ways to get the sum: "<<res<<endl;

    return 0;
}