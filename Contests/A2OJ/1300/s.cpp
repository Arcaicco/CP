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

bool iseven(int v) {
  return !(v & 1); 
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vii arr(n);
  for (auto& [u, v] : arr) cin >> u >> v;
  int sum_l = 0, sum_r = 0;

  for (auto &[u, v] : arr) sum_l += u, sum_r += v;
  if (iseven(sum_l) && iseven(sum_r)) { cout << 0 << '\n'; return 0; }

  int difs = 0, equals = 0;
  for (auto &[u, v] : arr) {
    if ((iseven(u) && iseven(v)) || (!iseven(u) && !iseven(v))) equals++;
    else difs++;
  }

  if (iseven(difs) && difs > 0) cout << 1;
  else cout << -1;

  return 0;
}
