#include <bits/stdc++.h>
using namespace std;

int x[100];

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << x[a[i]-1] << " ";
    }
    cout << endl;
}

void generate(int n, int k) {
    int a[n];
	for (int i = 0; i < k; i++) {
		a[i] = i + 1;
	}
    bool hasNext = true;
    while(hasNext) {
        printArray(a, k);
        int i = k - 1;
        while(i >= 0 && a[i] == n - k + i + 1)
            i--;
        if(i >= 0) {
            a[i]++;
            for(int j = i+1; j < k; j++) {
                a[j] = a[j - 1] + 1;
            }
        } else {
            hasNext = false;
        }
    }
}

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    set<int> se;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    int cnt = 0;
    for(int it : se) {
        x[cnt++] = it;
    }
    generate(cnt, k);
}
