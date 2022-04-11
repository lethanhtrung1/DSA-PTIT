#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
      int k; cin >> k;
      string s; cin >> s;
      int cnt[256] = {0};
      for(int i = 0; i < s.size(); i++)
          cnt[s[i]]++;
      priority_queue<int, vector<int>> pq;
      for(int i = 0; i < s.size(); i++) {
          if(cnt[s[i]] > 0) {
              pq.push(cnt[s[i]]);
              cnt[s[i]] = 0;
          }
      }
      while(k > 0 && !pq.empty()) {
          k--;
          int top = pq.top(); pq.pop();
          top--;
          pq.push(top);
      }
      long long ans = 0;
      while(!pq.empty()) {
          int top = pq.top(); pq.pop();
          ans += top * top;
      }
      cout << ans << endl;
    }

	return 0;
}
