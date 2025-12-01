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
  /*
  int n; cin >> n;
  map<int, bool> mp;
  for (int i = 0; i < n; i++) {
    int u, v; cin >> u >> v;
    mp[u] = true;
    mp[v] = false;
  }
  int cnt = 0;
  int ans = 0;
  for (auto& [key, val] : mp) {
    cnt += val ? 1 : -1;
    ans = max(ans, cnt);
  }
  cout << ans;
  */

  int n; cin >> n;
  vector<pair<int, bool>> arr;
  for (int i = 0; i < n; i++) {
    int u, v; cin >> u >> v;
    arr.emplace_back(u, 1);
    arr.emplace_back(v, 0);
  }
  sort(arr.begin(), arr.end());

  int ans = 0;
  int cnt = 0;
  for (auto& [key, val] : arr) {
    cnt += val ? 1 : -1;
    ans = max(ans, cnt);
  }
  cout << ans;
  return 0;
}
