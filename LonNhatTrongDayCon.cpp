#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int max = 0, pos = 0;
        for(int i = 0; i < k; i++) {
            if(max <= a[i]) {
                max = a[i];
                pos = i;
            }
        }
        cout << max << " ";
        for(int i = k; i < n; i++) {
            if(a[i] > max) {
                max = a[i];
                pos = i;
            }
            if(a[i] < max && i >= pos + k) {
                max = a[i];
                for(int j = i; j > i - k; j--) {
                    if(a[j] > max) {
                        max = a[j];
                        pos = j;
                    }
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}


// phan tu lon nhat trong day con
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        multiset<int> se;
        for(int i = 0; i < k; i++) se.insert(a[i]);
        cout << *se.rbegin() << " ";
        for(int i = k; i < n; i++) {
            se.erase(se.find(a[i - k]));
            se.insert(a[i]);
            cout << *se.rbegin() << " ";
        }
        cout << endl;
    }

    return 0;
}