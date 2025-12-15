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
  vii arr(n);
  for (auto& [u, v] : arr) cin >> u >> v;
  int a = 0, b = 0;
  for (auto& [u, v] : arr) {
    if (u) a++;
    if (v) b++;
  }
  cout << min(n - a, a) + min(n - b, b) << '\n';
  return 0;
}
