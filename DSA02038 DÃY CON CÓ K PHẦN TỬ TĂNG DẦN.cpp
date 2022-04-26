#include <bits/stdc++.h>

using namespace std;

bool stop;

void generate(int t[], int n, int k) {
    int check = 0;
    for(int i = k; i >= 1; i--) {
        if(t[i] != n - k + i) {
            t[i]++;
            check = 1;
            for(int j = i + 1; j <= k; j++)
                t[j] = t[j - 1] + 1;
            break;
        }
    }
    if(!check) stop = true;
}

int main() {
    int t; cin >> t;
    while(t--) {
      int n, k; cin >> n >> k;
      int a[n+1], t[n+1];
      for(int i = 1; i <= n; i++) {
          cin >> a[i];
          t[i] = i;
      }
      sort(a + 1, a + n + 1);
      stop = false;
      while(!stop) {
            for(int i = 1; i <= k; i++)
                cout << a[t[i]] << " ";
            cout << endl;
            generate(t, n, k);
        }
    }

	return 0;
}
