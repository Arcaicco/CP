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
  string s; cin >> s;
  vi dp(s.size()); dp[0] = 1;
  int ans = 1;
  for (int i = 1; i < s.size(); i++) {
    dp[i] = s[i] == s[i - 1] ? dp[i - 1] + 1 : 1;
    ans = max(ans, dp[i]);
  }
  cout << ans;

  return 0;
}
