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
  int ans = 0;
  vii arr(n);
  for (int i = 0; i < n; i++) {
    int u, v; cin >> u >> v;
    arr[i] = {u, v};
  }
  for (int i = 0; i < n; i++) {
      bool a, b, c, d; a = b = c = d = false;
    for (int j = 0; j < n; j++) {
      auto [x1, y1] = arr[i];
      auto [x2, y2] = arr[j];
      if (x1 == x2 && y1 < y2) a = true;
      if (x1 == x2 && y1 > y2) b = true;
      if (y1 == y2 && x1 < x2) c = true;
      if (y1 == y2 && x1 > x2) d = true;
    }
    if (a && b && c && d) ans++;
  }
  cout << ans << '\n';
  return 0;
}
