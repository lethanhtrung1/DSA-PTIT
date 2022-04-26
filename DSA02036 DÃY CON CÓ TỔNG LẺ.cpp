#include <bits/stdc++.h>

using namespace std;

bool stop;

void generate(int t[], int n) {
    int check = 0;
    for(int i = n-1; i >= 0; i--) {
        if(t[i] == 0) {
            t[i] = 1;
            check = 1;
            for(int j = i + 1; j < n; j++)
                t[j] = 0;
            break;
        }
    }
    if(!check) stop = true;
}

int main() {
	int t; cin >> t;
	while(t--) {
      int n; cin >> n;
      int a[n+1];
      for(int i = 0; i < n; i++)
          cin >> a[i];
      sort(a, a + n, greater<int>());
      int t[n+1] = {0};
      stop = false;
      while(!stop) {
          int sum = 0;
          for(int i = 0; i < n; i++)
              if(t[i] == 1) sum += a[i];
          if(sum % 2 == 1) {
              for(int i = 0; i < n; i++)
                  if(t[i] == 1) cout << a[i] << " ";
              cout << endl;
          }
          generate(t, n);
      }
	}

	return 0;
}
