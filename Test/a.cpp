#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int ans = 0;
    if (s.find("**") != string::npos) ans = -1;
    if (s.find("*<") != string::npos) ans = -1;
    if (s.find(">*") != string::npos) ans = -1;
    if (s.find("><") != string::npos) ans = -1;

    if (ans == -1) { cout << -1 << '\n'; continue; }
    
    int l = 0, r = (int) s.size() - 1;
    int cnt_l = 0, cnt_r = 0;
    while (l < (int) s.size()) {
      if (s[l] == '>') break;
      l++;
      cnt_l++;
    }
    while (r >= 0) {
      if (s[r] == '<') break;
      r--;
      cnt_r++;
    }
    //cout << l << ' ' << r << '\n';
    cout << max(cnt_l, cnt_r) << '\n';
  }
  return 0;
}
