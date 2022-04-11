#include <bits/stdc++.h>

using namespace std;

void findMin(int sum) {
    int a = 0, b = 0; // 4*a + 7*b = sum
    while(sum > 0) {
        if(sum % 7 == 0) {
            b++;
            sum -= 7;
        }
        else if(sum % 4 == 0) {
            a++;
            sum -= 4;
        }
        else {
            // a++;
            // sum -= 4;
            b++;
            sum -= 7;
          }
      }
      if(sum < 0) {
          cout << -1 << endl;
          return;
      }
      for(int i = 0; i < a; i++)
          cout << "4";
      for(int i = 0; i < b; i++)
          cout << "7";
      cout << endl;
  }

  int main() {
      int t; cin >> t;
      while(t--) {
          int n; cin >> n;
          findMin(n);
      }

    return 0;
}
