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
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int v; cin >> v; mp[v]++;
  }
  int mx = 0;
  for (auto& [k, v] : mp)
    mx = max(mx, v);

  cout << (mx <= (n + 1) / 2 ? "YES" : "NO");

  return 0;
}
