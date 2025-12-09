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
  int y, k, n; cin >> y >> k >> n;
  vi ans;
  for (int i = k; i <= n; i += k) {
    if (i <= y) continue;
    ans.push_back(i - y);
  }
  if (ans.empty()) { cout << -1; return 0; }

  for (int& v : ans) cout << v << ' ';

  return 0;
}
