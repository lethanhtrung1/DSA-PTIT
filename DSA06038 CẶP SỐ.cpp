#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, inv_count = 0, cnt = left;
    while(i <= mid - 1 && j <= right) {
        if(a[i] <= a[j])
            temp[cnt++] = a[i++];
        else {
            inv_count += mid - i;
            temp[cnt++] = a[j++];
        }
    }
    while(i <= mid - 1) temp[cnt++] = a[i++];
    while(j <= right) temp[cnt++] = a[j++];
    for(int i = left; i <= right; i++)
        a[i] = temp[i];
    return inv_count;
}

int _mergeSort(int a[], int temp[], int left, int right) {
    int inv_count = 0;
    int mid;
    if(left < right) {
        mid = (left + right) / 2;
        inv_count += _mergeSort(a, temp, left, mid);
        inv_count += _mergeSort(a, temp, mid + 1, right);
        inv_count += merge(a, temp, left, mid + 1, right);
    }
    return inv_count;
}

int main() {
    int n; cin >> n;
    int a[1000001], x[1000001], temp[1000001];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            x[m] = a[i];
            m++;
        }
    }
    int res = _mergeSort(x, temp, 0, m - 1);
    int cnt = 0;
    a[n] = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && a[i+1] % 2 == 0) cnt++;
        if(a[i] % 2 == 0 && a[i+1] % 2 == 1) {
            res -= _mergeSort(a, temp, i - cnt, i);
            cnt = 0;
        } 
    }
    cout << res;

    return 0;
}
