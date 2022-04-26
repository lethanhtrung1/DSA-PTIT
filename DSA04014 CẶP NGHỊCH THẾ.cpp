#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll merge(ll *a, ll *tmp, int left, int right, int mid) {
    int i = left, j = mid, t = left;
    ll cnt = 0;
    while(i <= mid - 1 && j <= right) {
        if(a[i] <= a[j])
          tmp[t++] = a[i++];
        else {
          cnt += mid - i;
          tmp[t++] = a[j++];
        }
    }
    while(i <= mid - 1) tmp[t++] = a[i++];
    while(j <= right) tmp[t++] = a[j++];
    for(int i = left; i <= right; i++)
        a[i] = tmp[i];
    return cnt;
}

ll mergeSort(ll *a, ll *tmp, int left, int right) {
    ll inv_count = 0;
    int mid;
    if(left < right) {
        mid = (left + right) / 2;
        inv_count += mergeSort(a, tmp, left, mid);
        inv_count += mergeSort(a, tmp, mid + 1, right);
        inv_count += merge(a, tmp, left, right, mid + 1);
    }
    return inv_count;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a[n+5];
        for(int i = 0; i < n; i++)
          cin >> a[i];
        ll tmp[n+5];
        cout << mergeSort(a, tmp, 0, n - 1) << endl;
    }
	
	return 0;
}
