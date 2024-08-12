#include<iostream>
using namespace std;

using ll = long long;

int findLastOccurrence(int a[], int n, int x) {
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2; // Safe calculation of mid
        if (a[mid] > x) {
            r = mid - 1;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            ans = mid; // Found the element, but continue searching on the right
            l = mid + 1;
        }
    }
    return ans;
}