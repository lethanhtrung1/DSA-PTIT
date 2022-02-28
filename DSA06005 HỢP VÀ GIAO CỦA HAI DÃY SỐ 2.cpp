#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        sort(a, a+n);
        sort(b, b+m);
        vector <int> Union, Intersection;
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(a[i] < b[j]) {
                Union.push_back(a[i]);
                i++;
            }
            else if(a[i] > b[j]) {
                Union.push_back(b[j]);
                j++;
            }
            else {
                Union.push_back(a[i]);
                Intersection.push_back(a[i]);
                i++; j++;
            }
        }
        while(i < n) Union.push_back(a[i++]);
        while(j < m) Union.push_back(b[j++]);
        for(int x : Union) cout << x << " ";
        cout << endl;
        for(int x : Intersection) cout << x << " ";
        cout << endl;
    }

    return 0;
}
