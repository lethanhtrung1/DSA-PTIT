#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int x[], int n) {    
    for(int i = 0; i < n; i++) {
        cout << x[a[i]-1] << " ";
    }
    cout << endl;
}

void generate(int x[], int n) {
    int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
    bool hasNext = true;
    while(hasNext) {
        printArray(a, x, n);
        int i = n - 2;
        while(i >= 0 && a[i] > a[i+1])
            i--;
        if(i >= 0) {
            int j = n-1;
            while(a[j] < a[i]) j--;
            swap(a[i], a[j]);
            int l = i+1, r = n-1;
            while(l <= r) {
                swap(a[l], a[r]);
                l++; r--;
            }
        } else {
            hasNext = false;
        }
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    generate(a, n);
}
